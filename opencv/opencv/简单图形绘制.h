#pragma once
#include<iostream>
#include<opencv2\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\opencv.hpp>
using namespace cv;
using namespace std;

#define WINDOW_WIDTH 666	//���ڿ�
#define WIDDOW_HIGHT 666	//���ڸ�
int cv_7()
{
	//����һ���Ժ�ɫ��ʼ������СΪWINDOW_WIDTH��WIDDOW_HIGHT��ͼƬ
	Mat	frame(WINDOW_WIDTH, WIDDOW_HIGHT, CV_8UC3, Scalar(0, 0, 0));

	//�ڵ�point������һ���뾶ΪWIDDOW_HIGHT/8��Բ
	circle(frame, Point(WINDOW_WIDTH / 2, WIDDOW_HIGHT / 2), WIDDOW_HIGHT / 8, Scalar(225, 225, 225), -1);

	//��������֮���һ��ֱ��
	line(frame, Point(0, 0), Point(WINDOW_WIDTH, WIDDOW_HIGHT), Scalar(225, 0, 225));

	//��������ͼ��ͬ�����ݲ�������ѧ���弴��

	imshow("test", frame);

	waitKey();
	system("pause");
	return 0;
}