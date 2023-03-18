/**
 *Problem Statement:  a program to find the Factors of a number
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
		cout<<"Enter a number:\t";
		cin>>num;
		
		for(int i=1; i<num; i++){
			if(num % i == 0){
				cout<<i<<" , ";
			}
		}
		
		cout<<num<<endl;
	}
	return 0;
}
