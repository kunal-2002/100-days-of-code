/**
 *Problem Statement:   a program to identify if the number is Palindrome or not.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <iostream>

using namespace std;


int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int num, rev_num, temp;
		
		cout<<"Enter a number:\t";
		cin>>num;
		
		temp = num;
		rev_num = 0;
		
		while(temp>0){
			rev_num = rev_num*10 + temp%10;
			temp = temp/10;
		}
		
		if(rev_num == num)
			cout<<"Palindrome"<<endl;
		else
			cout<<"Not a Palindrome"<<endl;
	}
	return 0;
}
