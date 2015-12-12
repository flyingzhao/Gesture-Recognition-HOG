#include "head.h"

int svmtest(Mat &label,Mat &traindata){

	cout<<"training"<<'\n';

	CvSVM svm;
	CvSVMParams param;    
	CvTermCriteria criteria;      
	criteria = cvTermCriteria( CV_TERMCRIT_EPS, 1000, FLT_EPSILON );      
	param = CvSVMParams( CvSVM::C_SVC, CvSVM::LINEAR, 10.0, 0.09, 1.0, 10.0, 0.5, 1.0, NULL, criteria );     
	
	svm.train(traindata,label,Mat(),Mat(),param);
	svm.save( "SVM_DATA.xml" );   

	cout<<"done"<<'\n';

	cout<<"predict"<<'\n';


	return 0;
}