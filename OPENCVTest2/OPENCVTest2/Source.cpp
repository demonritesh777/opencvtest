#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
using namespace std;
int main()
{
	Mat img = imread("./images/image.jfif");
	if (img.empty())
	{
		cout << "Error!!..";
		return -1;
	}
	namedWindow("image", WINDOW_AUTOSIZE);
	imshow("Original image", img);
	Mat img1 = imread("./images/image.jfif", IMREAD_GRAYSCALE);
	imshow("Grayscale", img1);
	waitKey();
	return 0;

}
