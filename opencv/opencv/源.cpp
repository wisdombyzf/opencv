#include<iostream>
#include<opencv2\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\opencv.hpp>
#include"��������.h"
#include"��ʴ������.h"
#include"ͼ��ģ��.h"
#include"��Ե���.h"
#include"��Ƶ��������.h"
using namespace cv;
using namespace std;
int main()
{
	cv_4();

	/*
	Mat test,result;
	test = imread("a.jpg");
	Canny(test, result, 5, 100);
	namedWindow("����");
	imshow("���Դ���", result);
	imwrite("��Ե���.jpg", result);
	*/
	/*
	Mat test2(Size(200, 200),CV_8UC3);
	namedWindow("���Դ���");
	imshow("���Դ���", test2);
	*/
	//cout << test.size();
	waitKey();
	system("pause");
	return 0;
}