/**
 *Problem Statement:  a program to find Sum of N natural numbers.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <iostream>

using namespace std;


int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int num, sum;
		sum = 0;
		cout<<"Enter a number:\t";
		cin>>num;
		
		for(int i = 1;i<=num; i++){
			sum += i;
		}
		
		cout<<"Sum of first "<<num<<" natural numbers is "<<sum<<"."<<endl;
	}
	
	return 0;
}
