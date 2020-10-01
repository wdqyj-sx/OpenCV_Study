#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
int main() {
	cv::Mat image; //创建一个空图像
	//std::cout << "This image is" << image.rows << "x" << image.cols << std::endl;
	//读取图像
	image = cv::imread(".\\images\\baboon01.jpg");
	if (image.empty()) {
		//读取图片错误处理
		std::cout << "没有读取图像";
	}
	// 定义窗口
	cv::namedWindow("Original Image");
	// 显示图像
	cv::imshow("Original Image", image);


}