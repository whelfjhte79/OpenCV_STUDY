#include<opencv2/opencv.hpp>

#include<iostream>
using namespace cv;
using namespace std;

int main() {
	Mat img;
	Point p;
	p.x = 5;
	p.y = 7;
	cout << p;
	//img = imread("lenna.bmp");
	//if (img.empty()) {
	//	std::cerr << "Image load failed" << std::endl;
	//	return -1;
	//}
	//namedWindow("image");
	//imshow("image", img);
	//
	//waitKey();
	return 0;
}