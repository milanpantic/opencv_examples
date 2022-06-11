
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"

#include <opencv2/opencv.hpp>
#include <opencv2/core/matx.hpp>

#include <iostream>
using namespace cv;
using namespace std;


int main(int argc, char** argv)
{

    cv::Mat image;
    image = imread(argv[1]);

    if (argc != 2 || !image.data)
    {
        std::cout << "No image data!" << std::endl;
        return -1;
    }

    cv::namedWindow("Display Image", WINDOW_AUTOSIZE);
    cv::imshow("Display Image", image);

    cv::waitKey(0);

    return 0;
}
