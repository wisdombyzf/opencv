#pragma once
#include<iostream>
#include<opencv2\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\opencv.hpp>
using namespace cv;
using namespace std;
int cv_2()
{
	Mat	test;
	namedWindow("测试");
	test = imread("a.jpg");
	imshow("原图", test);

	Mat erode_result, dilate_result, element;
	element = getStructuringElement(MORPH_RECT, Size(10, 10));		//设置一个10*10的正方形内核矩阵核
																	//对图片进行腐蚀处理
	erode(test, erode_result, element);
	imshow("腐蚀图", erode_result);
	//对图片进行膨胀处理
	dilate(test, dilate_result, element);
	imshow("膨胀图", dilate_result);
	waitKey();
	return 0;
}