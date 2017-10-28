/*
调用nameWindow函数和imshow函数，显示出两个窗口时将debug模式改为release模式即可
*/
#include<iostream>
#include<opencv2\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\opencv.hpp>
#include<opencv2\objdetect.hpp>		//物体侦测头文件
#include<opencv2\imgproc.hpp>
#include"简单图形绘制.h"
#include"GUI设置.h"
#include"基本操作.h"
#include"腐蚀与膨胀.h"
#include"图像模糊.h"
#include"边缘检测.h"
#include"视频基本操作.h"
using namespace cv;
using namespace std;

int main()
{
	VideoCapture cap("zf.mp4");		//实例化视频类，打开名为zf.mp4的视频文件 参数为0时，调用摄像头，笔记本的摄像头gg了？？？？？？
	if (!cap.isOpened())
	{
		cout << "视频打开失败" << endl;
		return 1;
	}
	double rate = cap.get(CV_CAP_PROP_FPS);		//取得帧速率

	Mat frame;
	namedWindow("视频测试");
	int delay = 1000 / rate;	//根据帧速率计算出，两帧间间隔的时间
	while (true)
	{
		if (!cap.read(frame))			//读取视频中的每一帧，若无帧可读即到最后一帧时，退出
		{
			break;
		}
		//cap >> frame;
		blur(frame, frame, Size(10, 10));	
		imshow("视频测试", frame);
		waitKey(delay);
	}
	system("pause");
	return 0;
}