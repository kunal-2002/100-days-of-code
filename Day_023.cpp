/**
 *Problem Statement:    a program to Replace all 0’s with 1's in a given integer.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <iostream>

using namespace std;


int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int num, altered_num = 0;
		
		cout<<"Enter a number:\t";
		cin>>num;
		
		if(num == 0)
			altered_num = 1;
			
		while(num>0){
			int digit = num%10;
			if(digit == 0)
				digit = 1;
			altered_num = altered_num*10 + digit;
			num = num/10;
		}
		
		num = 0;
		
		while(altered_num>0){
			int digit = altered_num%10;
			num = num*10 + digit;
			altered_num /= 10;
		}
		
		cout<<num<<endl;
	}
	return 0;
}
