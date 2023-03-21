/**
 *Problem Statement:  a program to identify if the number is Prime number or not.
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
		bool is_prime = true;
		cout<<"Enter a number: ";
		cin>>num;
		
		if(num == 0 || num == 1){
			is_prime = false;
		}
		
		for(int i=2; i<=num/2; ++i){
			if(num%i == 0){
				is_prime = false;
				break;
			}
		}
		
		if(is_prime)
			cout<<num<<" is a prime number"<<endl;
		else
			cout<<num<<" is not a prime number"<<endl;
		
	}
	return 0;
}
