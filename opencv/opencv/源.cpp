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
using namespace cv;
using namespace std;

int main()
{
	VideoCapture cap("zf.mp4");		//ʵ������Ƶ�࣬����Ϊzf.mp4����Ƶ�ļ� ����Ϊ0ʱ����������ͷ���ʼǱ�������ͷgg�ˣ�����������
	if (!cap.isOpened())
	{
		cout << "��Ƶ��ʧ��" << endl;
		return 1;
	}
	double rate = cap.get(CV_CAP_PROP_FPS);		//ȡ��֡����

	Mat frame;
	namedWindow("��Ƶ����");
	int delay = 1000 / rate;	//����֡���ʼ��������֡������ʱ��
	while (true)
	{
		if (!cap.read(frame))			//��ȡ��Ƶ�е�ÿһ֡������֡�ɶ��������һ֡ʱ���˳�
		{
			break;
		}
		//cap >> frame;
		blur(frame, frame, Size(10, 10));	
		imshow("��Ƶ����", frame);
		waitKey(delay);
	}
	system("pause");
	return 0;
}