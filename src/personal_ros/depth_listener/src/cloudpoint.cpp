#include <sensor_msgs/PointCloud2.h>
#include <ros/ros.h>
#include <pcl/point_types.h>
#include <pcl_ros/point_cloud.h>
#include <pcl_conversions/pcl_conversions.h>

#include <pcl/sample_consensus/method_types.h>
#include <pcl/sample_consensus/model_types.h>
#include <pcl/segmentation/sac_segmentation.h>
#include <pcl/filters/extract_indices.h>
#include <pcl/filters/passthrough.h>
#include <pcl/ModelCoefficients.h>
#include <pcl/features/normal_3d.h>

#include <boost/foreach.hpp>
#include <algorithm>
#include <opencv4/opencv2/highgui.hpp>

#include <iostream>
#include <stdio.h>
#include <typeinfo>

typedef pcl::PointCloud<pcl::PointXYZ> PointCloud;
typedef pcl::PointXYZ PointT;

class pointCloudDantum{
public:
        pointCloudDantum(){
                pub = nh.advertise<PointCloud>("/point2", 1);
                sub = nh.subscribe<PointCloud>("camera/depth/color/points", 1, &pointCloudDantum::pointCallback, this);
        }
        void pointCallback(const PointCloud::ConstPtr& cloud){
                printf("Cloud: width = %d, height = %d\n", cloud->height, cloud->width);
                //BOOST_FOREACH(const pcl::PointXYZRGB& pt, points->points)
                
                pcl::PassThrough<PointT> pass;
                pcl::NormalEstimation<PointT, pcl::Normal> ne;
                pcl::PCDWriter writer;
                pcl::SACSegmentationFromNormals<PointT, pcl::Normal> seg;
                pcl::ExtractIndices<PointT> extract;
                pcl::ExtractIndices<pcl::Normal> extract_nomal;
                pcl::search::KdTree<PointT>::Ptr tree(new pcl::search::KdTree<PointT>());

                pcl::PointCloud<PointT>::Ptr cloud_filtered (new pcl::PointCloud<PointT>);
                pcl::PointCloud<pcl::Normal>::Ptr cloud_normals (new pcl::PointCloud<pcl::Normal>);
                pcl::PointCloud<PointT>::Ptr cloud_filtered2 (new pcl::PointCloud<PointT>);
                pcl::PointCloud<pcl::Normal>::Ptr cloud_normals2 (new pcl::PointCloud<pcl::Normal>);
                pcl::ModelCoefficients::Ptr coefficients_plane (new pcl::ModelCoefficients), coefficients_cylinder (new pcl::ModelCoefficients);
                pcl::PointIndices::Ptr inliers_plane (new pcl::PointIndices), inliers_cylinder (new pcl::PointIndices);

                pass.setInputCloud(cloud);
                pass.setFilterFieldName("z");
                pass.setFilterLimits(0, 1.5);
                pass.filter(*cloud_filtered);

                ne.setSearchMethod(tree);
                ne.setInputCloud(cloud_filtered);
                ne.setKSearch(50);
                ne.compute(*cloud_normals);

                seg.setOptimizeCoefficients(true);
                seg.setModelType(pcl::SACMODEL_NORMAL_PLANE);
                seg.setNormalDistanceWeight(0.1);
                seg.setMethodType(pcl::SAC_RANSAC);
                seg.setMaxIterations(1000);
                seg.setDistanceThreshold(0.03);
                seg.setInputCloud(cloud_filtered);
                seg.setInputNormals(cloud_normals);
                seg.segment(*inliers_plane, *coefficients_plane);

                extract.setNegative(false);
                extract.setInputCloud(cloud_filtered);
                extract.setIndices(inliers_plane);
                PointCloud::Ptr cloud_plane(new PointCloud());
                extract.filter(*cloud_plane);
                writer.write("/home/redflag/point.pcd", *cloud_plane, false);

        }

private:
        ros::NodeHandle nh;
        ros::Publisher pub;
        ros::Subscriber sub;
};
int main(int argc, char** argv){
        ros::init(argc, argv, "cloud_sub");
        //auto msgPtr = ros::topic::waitForMessage<PointCloud>("/camera/depth/color/points", nh);
        //auto msg = *msgPtr;
        //pointCallback(msgPtr);
        pointCloudDantum SAPObj;
        ros::spin();

        return 0; }
