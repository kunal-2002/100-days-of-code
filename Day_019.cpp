/**
 *Problem Statement:  a program to identify if the number is Armstrong number or not.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <iostream>
#include <cmath>

using namespace std;

int countDigit(int n){
	if(n == 0)
		return 1;
	int count = 0;
	while(n != 0){
		n = n/10;
		++count;
	}
	return count;
}

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int num, temp, sum, digit, t_digits;
		sum = 0;
		
		cout<<"Enetr the Number = ";
		cin>>num;
		
		temp = num;
		t_digits = countDigit(num);
		
		while(num>0){
			digit = num%10;
			sum += pow(digit, t_digits);
			num = num/10;
		}
		
		if(temp == sum){
			cout<<"Armstrong number"<<endl;
		}
		else{
			cout<<"Not an Armstrong number"<<endl;
		}
	}
	return 0;
}
