#include<head.h>

int pre(string filename){
	/*
	SVM svm;
	svm.load("SVM_DATA.xml");
	Mat src=imread(filename);

	HOGDescriptor hog(Size(100,100),Size(10,10),Size(5,5),Size(5,5), 6);
	vector<float> descriptors;  
	hog.compute(src,descriptors,Size(1,1),Size(0,0));

	CvMat* SVMtrainMat=cvCreateMat(1,descriptors.size(),CV_32FC1);    
	int n=0;    
	for(vector<float>::iterator iter=descriptors.begin();iter!=descriptors.end();iter++)    
	{    
		cvmSet(SVMtrainMat,0,n,*iter);    
		n++;    
	}    

	int ret = svm.predict(SVMtrainMat);
	cout<<ret;
*/
	return 0;
}