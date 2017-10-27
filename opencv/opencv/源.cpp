#include<iostream>
#include<opencv2\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\opencv.hpp>
#include"基本操作.h"
#include"腐蚀与膨胀.h"
#include"图像模糊.h"
#include"边缘检测.h"
#include"视频基本操作.h"
using namespace cv;
using namespace std;
int main()
{
	cv_4();

	/*
	Mat test,result;
	test = imread("a.jpg");
	Canny(test, result, 5, 100);
	namedWindow("窗口");
	imshow("测试窗口", result);
	imwrite("边缘检测.jpg", result);
	*/
	/*
	Mat test2(Size(200, 200),CV_8UC3);
	namedWindow("测试窗口");
	imshow("测试窗口", test2);
	*/
	//cout << test.size();
	waitKey();
	system("pause");
	return 0;
}