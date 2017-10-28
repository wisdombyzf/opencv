#pragma once
#include<iostream>
#include<opencv2\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\opencv.hpp>
using namespace cv;
using namespace std;
int cv_5()
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

		imshow("��Ƶ����", frame);
		waitKey(delay);
	}

	return 0;
}