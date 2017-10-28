#pragma once
#include<iostream>
#include<opencv2\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\opencv.hpp>
using namespace cv;
using namespace std;

#define WINDOW_WIDTH 666	//窗口宽
#define WIDDOW_HIGHT 666	//窗口高
int cv_7()
{
	//创建一个以黑色初始化，大小为WINDOW_WIDTH，WIDDOW_HIGHT的图片
	Mat	frame(WINDOW_WIDTH, WIDDOW_HIGHT, CV_8UC3, Scalar(0, 0, 0));

	//在点point处绘制一个半径为WIDDOW_HIGHT/8的圆
	circle(frame, Point(WINDOW_WIDTH / 2, WIDDOW_HIGHT / 2), WIDDOW_HIGHT / 8, Scalar(225, 225, 225), -1);

	//绘制两点之间的一条直线
	line(frame, Point(0, 0), Point(WINDOW_WIDTH, WIDDOW_HIGHT), Scalar(225, 0, 225));

	//绘制其他图形同理，根据参数及数学定义即可

	imshow("test", frame);

	waitKey();
	system("pause");
	return 0;
}