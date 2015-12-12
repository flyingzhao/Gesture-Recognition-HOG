#include "head.h"  
    

int main()      
{      
    int num=900; 
    
	Mat label(num,1,CV_32FC1);
	Mat traindata(num,8664,CV_32FC1);
	hog(label,traindata);
	hogno(label,traindata);
	svmtest(label,traindata);


    return 0;    
}    