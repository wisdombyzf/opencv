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
	namedWindow("����");
	test = imread("a.jpg");
	imshow("ԭͼ", test);

	Mat result;
	blur(test, result, Size(5, 5));	//��ֵ�˲�
	imshow("ģ��������ͼƬ", result);
	waitKey();
	return 0;
}