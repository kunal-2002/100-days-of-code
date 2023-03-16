/**
 *Problem Statement:  a program to identify if the number is Strong number or not.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <iostream>

using namespace std;

int factorial(int n){
	if(n==0 || n==1)
		return 1;
	else
		return(n*factorial(n-1));
}

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int num, temp, digit;
		int sum = 0;
		cout<<"Enter a number:\t";
		cin>>num;
		
		temp = num;
		while(temp>0){
			digit = temp % 10;
			sum = sum + factorial(digit);
			temp = temp / 10;
		}
		
		if(sum == num){
			cout<<"Strong Number";
		}
		else{
			cout<<"Not a strong number";
		}
		
		cout<<endl;
	}
	return 0;
}
