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
	namedWindow("≤‚ ‘");
	test = imread("a.jpg");
	imshow("‘≠Õº", test);

	Mat result;
	Canny(test, result, 5, 100);	//canny±ﬂ‘µºÏ≤‚
	imshow("±ﬂ‘µºÏ≤‚¥¶¿Ì∫ÛµƒÕº∆¨", result);
	waitKey();
	return 0;
}