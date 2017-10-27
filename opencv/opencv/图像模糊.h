#pragma once
#include<iostream>
#include<opencv2\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\opencv.hpp>
using namespace cv;
using namespace std;
int cv_3()
{
	Mat	test;
	namedWindow("测试");
	test = imread("a.jpg");
	imshow("原图", test);

	Mat result;
	blur(test, result, Size(5, 5));	//均值滤波
	imshow("模糊处理后的图片", result);
	waitKey();
	return 0;
}