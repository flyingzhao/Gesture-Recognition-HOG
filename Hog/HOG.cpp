#include "head.h"

int hog(Mat &label,Mat &traindata){
	int pos=300;
		Mat src;
	ofstream ofile;
    ofile.open("1.txt",ios::out|ios::app);

	for(int j=0;j<pos;j++){
		char s[5];
		itoa(j,s,10);

		string filename="E:/handrec/hand/";
		filename.append(s).append(".jpg");
		//string filename="E:/handrec/hand/4.jpg";
		src=imread(filename);

		if(src.data==NULL) continue;

		HOGDescriptor hog(Size(100,100),Size(10,10),Size(5,5),Size(5,5), 6);
		vector<float> descriptors;  
		hog.compute(src,descriptors,Size(1,1),Size(0,0));
		
		cout<<descriptors.size();

		float* la= label.ptr<float>(j);
		la[0]=1;

		float* data= traindata.ptr<float>(j);
			cout<<j;
		for (int i=0; i<8664; i++) {
			data[i]=descriptors[i];
		if (i==0)
		{
			ofile<<"1 "<<"1:"<<data[i]<<" ";
		}
		else{
			if(i==8663) {ofile<<8664<<":"<<data[i]<<'\n';continue;}
			ofile<<i+1<<":"<<data[i]<<" ";
			
		}
		}
		cout<<filename<<"is done"<<'\n';

	}
	
	ofile.close();	
	return 0;
}