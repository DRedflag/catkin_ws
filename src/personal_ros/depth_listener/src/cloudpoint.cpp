#include <sensor_msgs/PointCloud2.h>
#include <ros/ros.h>
#include <pcl/point_types.h>
#include <pcl_ros/point_cloud.h>
#include <pcl_conversions/pcl_conversions.h>
#include <boost/foreach.hpp>
#include <algorithm>
#include <opencv4/opencv2/highgui.hpp>

#include <iostream>
#include <stdio.h>
#include <typeinfo>

typedef pcl::PointCloud<pcl::PointXYZRGB> PointCloud;

void pointCallback(const PointCloud::ConstPtr& points){
        printf("Cloud: width = %d, height = %d\n", points->height, points->width);
        cv::Mat image(points->height, points->width, CV_8UC3);
        //BOOST_FOREACH(const pcl::PointXYZRGB& pt, points->points)
        for(int h=0; h<image.rows-1; ++h)
                for(int k=0; k<image.cols-1; ++k){
                        pcl::PointXYZRGB point = points->at(k, h);
                        image.at<cv::Vec3b>(h,k)[0]=point.b;
                        image.at<cv::Vec3b>(h,k)[1]=point.g;
                        image.at<cv::Vec3b>(h,k)[2]=point.r;
                }
        cv::imshow("view",image);
        cv::waitKey(1);
}

int main(int argc, char** argv){
        ros::init(argc, argv, "cloud_sub");
        ros::NodeHandle nh;
        ros::Rate loop_rate(10);
        ros::Subscriber sub=nh.subscribe<PointCloud>("/camera/depth/color/points", 1, pointCallback);
        //auto msgPtr = ros::topic::waitForMessage<PointCloud>("/camera/depth/color/points", nh);
        //auto msg = *msgPtr;
        //pointCallback(msgPtr);
        ros::spin();
        cv::destroyAllWindows();

        return 0; }
