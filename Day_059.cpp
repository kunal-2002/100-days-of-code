/**
 *Problem Statement:    Body Mass Index: You are given the height H (in metres) and mass M (in kilograms) of Anusree. 
 						The Body Mass Index (BMI) of a person is computed as M/H^2.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int M, H;
		cin>>M>>H;
		int BMI = M/(H*H);
		
		if (BMI<=18){
			cout<<1<<endl;
		}
		else if(BMI>18 && BMI<=24){
			cout<<2<<endl;
		}
		else if(BMI>24 && BMI<=29){
			cout<<3<<endl;
		}
		else{
			cout<<4<<endl;
		}
	}
	return 0;
}
