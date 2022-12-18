#include <opencv4/opencv2/core/core.hpp>
//#include <opencv2/imgcodecs.hpp>
#include <opencv4/opencv2/highgui/highgui.hpp>
//#include <opencv2/opencv.hpp>
//#include <iostream>
#include <string>

using namespace cv;
using namespace std;

int main()
{
    //std::string image_path = samples::findFile("218.jpeg");
    Mat img = imread("./218.jpeg", IMREAD_COLOR);
    //if(img.empty())
    //{
       // std::cout << "Could not read the image: " << image_path << std::endl;
       // return 1;
    //}
    namedWindow("Display window",WINDOW_AUTOSIZE);
    imshow("Display window", img);
    waitKey(0); // Wait for a keystroke in the window
    //if(k == 's')
    //{
     //   imwrite("218.jpeg", img);
    //}
    return 0;
}
