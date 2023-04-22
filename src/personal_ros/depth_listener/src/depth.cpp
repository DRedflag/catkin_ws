#include <ros/ros.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.h>


#include <iostream>

void depthCallback(const sensor_msgs::ImageConstPtr msg){
        try{
                cv::Mat image = cv_bridge::toCvCopy(msg, "16UC1")->image;
                fprintf(stdout, "%d, %d\n", image.rows, image.cols);
                cv::imshow("view", image);
                cv::waitKey(1);
        }
        catch(cv_bridge::Exception& e){
                ROS_ERROR("%s", e.what());
        }
}

void imageCallback(const sensor_msgs::ImageConstPtr msg){
        try{
                cv::Mat image = cv_bridge::toCvCopy(msg, "bgr8")->image;
                fprintf(stdout, "%d, %d\n", image.rows, image.cols);
                cv::imshow("view", image);
                cv::waitKey(1);
        }
        catch(cv_bridge::Exception& e){
                ROS_ERROR("%s", e.what());
        }
}


int main(int argc, char** argv){
        ros::init(argc, argv, "image_listener");
        ros::NodeHandle nh;
        image_transport::ImageTransport it(nh);


        image_transport::Subscriber sub = it.subscribe("camera/color/image_raw", 1, imageCallback);
        //image_transport::Subscriber sub2 = it.subscribe("camera/depth/image_rect_raw", 1, depthCallback);

        ros::spin();
        cv::destroyAllWindows(); 
        return 0;
}
