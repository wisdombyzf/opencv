/*
����nameWindow������imshow��������ʾ����������ʱ��debugģʽ��Ϊreleaseģʽ����
*/
#include<iostream>
#include<opencv2\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\opencv.hpp>
#include<opencv2\objdetect.hpp>		//�������ͷ�ļ�
#include<opencv2\imgproc.hpp>
#include"��ͼ�λ���.h"
#include"GUI����.h"
#include"��������.h"
#include"��ʴ������.h"
#include"ͼ��ģ��.h"
#include"��Ե���.h"
#include"��Ƶ��������.h"
#include"�������.h"
using namespace cv;
using namespace std;




int main(void)
{
	string name;
	cout << "�����뽫Ҫ��������������Ƶ�ļ���(������׺)" << endl;
	cin >> name;
	cv_8(name);
	system("pause");
	return 0;
}



