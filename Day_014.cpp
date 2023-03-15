/**
 *Problem Statement:  a program to reverse a given number.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <iostream>

using namespace std;


int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int num, rev_num;
		
		rev_num = 0;
		cout<<"Enter a number:\t";
		cin>>num;
		
		while(num != 0){
			rev_num = rev_num * 10 + num % 10;
			num /= 10;
		}
		
		cout<<"Reversed number: "<<rev_num<<endl;
	}
	
	return 0;
}
