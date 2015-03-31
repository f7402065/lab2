#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"lab2.h"
using namespace std;

int main(){
	int len,wei,i;
	double res[5];
	BMI bmi[5];

	ifstream inFile("file.in",ios::in);

	if(!inFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}

 	for(i=0;i<5;i++){
		inFile>>len>>wei;
		bmi[i].sethei(len);
		bmi[i].setwei(wei);
		res[i]=bmi[i].ans();
	}


	ofstream outFile("outfile",ios::out);
	if(!outFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	for(i=0;i<5;i++){
		if(res[i]<15){
			outFile<<"Very severly underweight"<<endl;
			cout<<"Very severly underweight"<<endl;
		}
		else if(res[i]<16){
			outFile<<"Severly underweight"<<endl;
			cout<<"Severly underweight"<<endl;
		}
		else if(res[i]<18.5){
			outFile<<"Underweight"<<endl;
			cout<<"Underweight"<<endl;
		}
		else if(res[i]<25){
			outFile<<"Normal"<<endl;
			cout<<"Normal"<<endl;
		}
		else if(res[i]<30){
			outFile<<"Overweight"<<endl;
			cout<<"Overweight"<<endl;
		}
		else if(res[i]<35){
			outFile<<"Obese Class I(Moderately Obese)"<<endl;
			cout<<"Obese Class I(Moderately Obese)"<<endl;
		}
		else if(res[i]<40){
			outFile<<"Obese Class II(Severly Obese)"<<endl;
			cout<<"Obese Class II(Severly Obese)"<<endl;
		}
		else{
			outFile<<"Obese Class III(Very Severly Obese)"<<endl;
			cout<<"Obese Class III(Very Severly Obese)"<<endl;
		}

	}
		




	return 0;
}
