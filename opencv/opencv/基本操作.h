#pragma once
#include<iostream>
#include<opencv2\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\opencv.hpp>
using namespace cv;
using namespace std;
int cv_1()
{
	Mat test;
	test = imread("a.jpg");			//读取图片
	cout << "图片大小为" << test.size() << endl;	//输出图片的大小
	cout << "图片类型为" << test.type() << endl;	//输出图片类型
											//向图片中添加椒盐噪声
	int noisy_point_sum = 10000;		//图片中产生噪点的总数
	int x = test.cols;				//图片的列数
	int y = test.rows;				//图片的行数
	for (size_t i = 0; i <noisy_point_sum; i++)
	{
		int x_temp = rand() % x;	//随机选取点的x坐标
		int y_temp = rand() % y;	//随机选取点的y坐标
									//因为a.jpg为rgb图片，所以三个颜色通道要同时修改
		test.at<Vec3b>(y_temp, x_temp)[0] = 255;	//vec3b 表示每个像素用3通道8bit储存,at相当于迭代器
		test.at<Vec3b>(y_temp, x_temp)[1] = 255;
		test.at<Vec3b>(y_temp, x_temp)[2] = 255;
	}

	namedWindow("测试窗口");		//利用highgui构建窗口
	imshow("测试窗口", test);		//在窗口中显示图片test
	imwrite("hhhh.jpg", test);		//将test图片储存在hhhh.jpg中
	waitKey();						//等待n秒，n为参数，默认参数为0，即永远
	system("pause");
	return 0;
}