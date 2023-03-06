/**
 *Problem Statement: a program to identify if the number is even or odd.
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
		
		if(num%2 == 0)
			cout<<"Even"<<endl;
		else
			cout<<"Odd"<<endl;
	}
	
	return 0;
}
