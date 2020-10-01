
#include <iostream>
#include <opencv2/opencv.hpp>

int main1() {
	cv::Mat image = cv::imread("D:\\QQPage\\OpenCV3-Computer-Vision-Application-Programming-Cookbook-Third-Edition-master\\images\\baboon01.jpg");
	cv::imshow("test", image);
	cv::waitKey(0);
	return 0;
}