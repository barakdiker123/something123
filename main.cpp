

#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/videoio.hpp>

/**
 * Barak The King
 *
 *
 *
 * */

int main() {
  std::cout << " Hello World " << std::endl;
  cv::Mat image = cv::imread("starry_night.jpg");
  cv::Mat mat;
  cv::imshow("Hello World", image);
  cv::VideoCapture vc(0);
  vc.read(mat);
  cv::imshow("barak", mat);
  cv::waitKey(0);
}

// int function(int a , int b){
//	std::cout << "barak " ;
// }
