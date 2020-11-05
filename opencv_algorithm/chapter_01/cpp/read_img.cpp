// read a picture use cpp

#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int main()
{
    cout << "reading image..." << endl;
    int a = 10;
    Mat img = imread("test.png");
    cout << img.size() << endl;

    if (!img.data){
        return -1;
    }
    imshow("row picture", img);
    waitKey(0);

    cout << "That's all!" << endl;
    return 0;
}