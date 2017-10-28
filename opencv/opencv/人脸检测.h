#pragma once
#include<iostream>
#include<opencv2\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\opencv.hpp>
using namespace cv;
using namespace std;

void detectAndDisplay(Mat frame);
String face_cascade_name = "data\\haarcascade_frontalface_alt.xml";
String eyes_cascade_name = "data\\haarcascade_eye_tree_eyeglasses.xml";
CascadeClassifier face_cascade;
CascadeClassifier eyes_cascade;
string window_name = "�������";


int cv_8(string file_name="papi_1.FLV")
{
	VideoCapture capture;
	Mat frame;


	//���ؼ���,ѵ���õ�����
	if (!face_cascade.load(face_cascade_name))
	{
		cout << "����������ݼ���ʧ��";
		return -1;
	}
	if (!eyes_cascade.load(eyes_cascade_name))
	{
		cout << "�۲�������ݼ���ʧ��";
		return -1;
	}

	//��ȡ��Ƶ
	capture.open(file_name);
	if (!capture.isOpened())
	{
		cout << "��Ƶ�ļ�������" << endl;
		return -1;
	}
	bool flag = true;		//ÿ��֡����һ��������⣬�����cpu��ѹ��
	/*
	TODO ��ʵ����4~8֡����һ��������⣬���µļ�����֮ǰ��������Χ�ı�ǿ򲻱䡣
	��һ�������cpu��ѹ����������������Ȼÿ֡���һ�ξͺͿ�PPTû�����������ر��Ǹ�����Ƶ
	*/
	if (capture.isOpened())
	{
		while (true)
		{
			capture >> frame;
			//�Ե�ǰ֡ʹ�÷�����
			if (!frame.empty())
			{
				if (flag)
				{
					detectAndDisplay(frame);
				}
			}
			else
			{
				cout << "��Ƶ�Ѷ�ȡ���";
				break;
			}

			int c = waitKey(5);
			if ((char)c == 'c')
			{
				break;
			}
			flag = !flag;
		}
	}
	waitKey();
	return 0;
}


void detectAndDisplay(Mat frame)
{
	std::vector<Rect> faces;
	Mat frame_gray;

	cvtColor(frame, frame_gray, COLOR_BGR2GRAY);
	equalizeHist(frame_gray, frame_gray);

	//-- �������
	face_cascade.detectMultiScale(frame_gray, faces, 1.1, 2, 0 | CASCADE_SCALE_IMAGE, Size(30, 30));
	for (size_t i = 0; i < faces.size(); i++)
	{
		Point center(faces[i].x + faces[i].width / 2, faces[i].y + faces[i].height / 2);
		ellipse(frame, center, Size(faces[i].width / 2, faces[i].height / 2), 0, 0, 360, Scalar(255, 0, 255), 2, 8, 0);

		Mat faceROI = frame_gray(faces[i]);
		std::vector<Rect> eyes;

		//-- �����м���۾�
		eyes_cascade.detectMultiScale(faceROI, eyes, 1.1, 2, 0 | CASCADE_SCALE_IMAGE, Size(30, 30));

		for (size_t j = 0; j < eyes.size(); j++)
		{
			Point eye_center(faces[i].x + eyes[j].x + eyes[j].width / 2, faces[i].y + eyes[j].y + eyes[j].height / 2);
			int radius = cvRound((eyes[j].width + eyes[j].height)*0.25);
			circle(frame, eye_center, radius, Scalar(255, 0, 0), 3, 8, 0);
		}
	}
	//��ʾ����Ч��ͼ
	imshow(window_name, frame);
}
