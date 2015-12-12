#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp> 
#include <opencv2/objdetect/objdetect.hpp>
#include <fstream>
#include <stdio.h> 
#include <opencv2/ml/ml.hpp>

#include <vector>    
using namespace cv;    
using namespace std;  


int hog(Mat &label,Mat &trainData);
int hogno(Mat &label,Mat &traindata);
int svmtest(Mat &label,Mat &traindata);
//int pre(string filename);
