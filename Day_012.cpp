/**
 *Problem Statement:  a program to find Sum of digits of a number.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <iostream>

using namespace std;


int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int num, digit, sum;
		sum = 0;
		
		cout<<"Enter a number:\t";
		cin>>num;	
		
		while(num > 0){
			digit = num % 10;
			sum += digit;
			num = num / 10;
		}
		
		cout<<"Sum of digits:\t"<<sum<<endl;
	}
	
	return 0;
}
