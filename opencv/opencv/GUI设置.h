#pragma once
#include<iostream>
#include<opencv2\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\opencv.hpp>
#include<opencv2\objdetect.hpp>		//�������ͷ�ļ�
#include<opencv2\imgproc.hpp>

using namespace cv;
using namespace std;

int mp4_rata = 30;
void on_track(int a, void*)
{
	mp4_rata = a;
}


int cv_6()
{

	VideoCapture capture;
	capture.open("zf.mp4");
	namedWindow("����");
	createTrackbar("���ʵ���", "����", 0, 100, on_track);	//���ù켣����on_trackΪ�ص�����

	Mat	video;
	while (true)
	{
		capture >> video;
		imshow("����", video);
		waitKey(mp4_rata);
	}




	return 0;
}