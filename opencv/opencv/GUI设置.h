#pragma once
#include<iostream>
#include<opencv2\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\opencv.hpp>
#include<opencv2\objdetect.hpp>		//物体侦测头文件
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
	namedWindow("测试");
	createTrackbar("速率调节", "测试", 0, 100, on_track);	//设置轨迹条，on_track为回调函数

	Mat	video;
	while (true)
	{
		capture >> video;
		imshow("测试", video);
		waitKey(mp4_rata);
	}




	return 0;
}