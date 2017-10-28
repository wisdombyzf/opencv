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
#include"人脸检测.h"
using namespace cv;
using namespace std;




int main(void)
{
	string name;
	cout << "请输入将要进行人脸检测的视频文件名(包括后缀)" << endl;
	cin >> name;
	cv_8(name);
	system("pause");
	return 0;
}



