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
	test = imread("a.jpg");			//��ȡͼƬ
	cout << "ͼƬ��СΪ" << test.size() << endl;	//���ͼƬ�Ĵ�С
	cout << "ͼƬ����Ϊ" << test.type() << endl;	//���ͼƬ����
											//��ͼƬ����ӽ�������
	int noisy_point_sum = 10000;		//ͼƬ�в�����������
	int x = test.cols;				//ͼƬ������
	int y = test.rows;				//ͼƬ������
	for (size_t i = 0; i <noisy_point_sum; i++)
	{
		int x_temp = rand() % x;	//���ѡȡ���x����
		int y_temp = rand() % y;	//���ѡȡ���y����
									//��Ϊa.jpgΪrgbͼƬ������������ɫͨ��Ҫͬʱ�޸�
		test.at<Vec3b>(y_temp, x_temp)[0] = 255;	//vec3b ��ʾÿ��������3ͨ��8bit����,at�൱�ڵ�����
		test.at<Vec3b>(y_temp, x_temp)[1] = 255;
		test.at<Vec3b>(y_temp, x_temp)[2] = 255;
	}

	namedWindow("���Դ���");		//����highgui��������
	imshow("���Դ���", test);		//�ڴ�������ʾͼƬtest
	imwrite("hhhh.jpg", test);		//��testͼƬ������hhhh.jpg��
	waitKey();						//�ȴ�n�룬nΪ������Ĭ�ϲ���Ϊ0������Զ
	system("pause");
	return 0;
}