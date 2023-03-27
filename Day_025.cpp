/**
 *Problem Statement:    a program to find Area of a circle.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <iostream>

using namespace std;


int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		float radius, area;
		cout<<"Enter radius of circle:\t";
		
		cin>>radius;
		
		area = 3.14*radius*radius;
		
		cout<<"Area of circle = "<<area<<endl;
	}
	return 0;
}
