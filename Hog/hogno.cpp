#include "head.h"

int hogno(Mat &label,Mat &traindata){

	int neg=600;
	int pos=300;


	Mat src;
	ofstream ofile;
	ofile.open("1.txt",ios::out|ios::app);

	for(int j=0;j<neg;j++){
		char s[5];
		itoa(j,s,10);

		string filename="E:/handrec/scene/";
		filename.append(s).append(".jpg");
		
		src=imread(filename);

		if(src.data==NULL) continue;

		HOGDescriptor hog(Size(100,100),Size(10,10),Size(5,5),Size(5,5), 6);
		vector<float> descriptors;  
		hog.compute(src,descriptors,Size(1,1),Size(0,0));



		float* la= label.ptr<float>(j+pos);
		la[0]=0;

		float* data= traindata.ptr<float>(j+pos);
		cout<<j+pos;
		for (int i=0; i<8664; i++) {
			data[i]=descriptors[i];
			
			if (i==0)
			{
				ofile<<"0 "<<"1:"<<data[i]<<" ";
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