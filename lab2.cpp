#include"lab2.h"


void BMI::sethei(int hei){
	height=hei;
	height/=100;
//	cout<<"height="<<height<<"\t";
}
void BMI::setwei(int wei){
	mass=wei;
//	cout<<"mass="<<mass<<"\t";
}

double BMI::ans(){
	double bmi;
	bmi=mass/(height*height);
//	cout<<"BMI="<<bmi<<"\t";
	return bmi;
}
