#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace cv;
using namespace std;

Mat img;

int main()

{
	setlocale(LC_ALL, "Russian");
	char filename[80];
	cout << "������� ��� �����, � ������� ������ ������ ��������, � ������� Enter" << endl;
	cin.getline(filename, 80);
	cout << "������ ����";
	cout << filename << endl;

	Mat img = imread(filename, 1);
	//char* source_windom = "1.jpeg";

	namedWindow("source_window", WINDOW_AUTOSIZE);
	imshow("source_window", img);


	waitKey(0);
	return (0);
}
