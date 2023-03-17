/**
 *Problem Statement:  a program to identify if the number is Perfect number or not.
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
		
		for(int i=1; i<num; i++){
			if(num % i == 0){
				sum += i;
			}
		}
		
		if(sum == num){
			cout<<"Perfect Number";
		}
		else{
			cout<<"Not a Perfect number";
		}
		
		cout<<endl;
	}
	return 0;
}
