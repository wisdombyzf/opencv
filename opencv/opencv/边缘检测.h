#pragma once
#include<iostream>
#include<opencv2\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\opencv.hpp>
using namespace cv;
using namespace std;
int cv_4()
{
	Mat	test;
	namedWindow("����");
	test = imread("a.jpg");
	imshow("ԭͼ", test);

	Mat result;
	Canny(test, result, 5, 100);	//canny��Ե���
	imshow("��Ե��⴦����ͼƬ", result);
	waitKey();
	return 0;
}