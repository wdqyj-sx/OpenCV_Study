#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
int main() {
	cv::Mat image; //����һ����ͼ��
	//std::cout << "This image is" << image.rows << "x" << image.cols << std::endl;
	//��ȡͼ��
	image = cv::imread(".\\images\\baboon01.jpg");
	if (image.empty()) {
		//��ȡͼƬ������
		std::cout << "û�ж�ȡͼ��";
	}
	// ���崰��
	cv::namedWindow("Original Image");
	// ��ʾͼ��
	cv::imshow("Original Image", image);


}