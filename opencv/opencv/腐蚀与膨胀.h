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
	namedWindow("����");
	test = imread("a.jpg");
	imshow("ԭͼ", test);

	Mat erode_result, dilate_result, element;
	element = getStructuringElement(MORPH_RECT, Size(10, 10));		//����һ��10*10���������ں˾����
																	//��ͼƬ���и�ʴ����
	erode(test, erode_result, element);
	imshow("��ʴͼ", erode_result);
	//��ͼƬ�������ʹ���
	dilate(test, dilate_result, element);
	imshow("����ͼ", dilate_result);
	waitKey();
	return 0;
}