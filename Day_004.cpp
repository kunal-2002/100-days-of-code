/**
 *Problem Statement: a program to identify a number is positive or negative.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
 
 
#include <iostream>
using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int num;
		cin>>num;
		
		if(num>0)
			cout<<"Positive Number"<<endl;
		else if(num<0)
			cout<<"Negative Number"<<endl;
		else
			cout<<"Neither positive nor negative"<<endl;
	}
	
	return 0;
}
