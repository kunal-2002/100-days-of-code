/**
 *Problem Statement: a program to find Number of digits in an integer.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		long long num;
		cin>>num;
		int count = 0;
		if(num == 0)
			count = 1;
			
		else{
			while(num != 0){
				num = num / 10;
				++count;
			}
		}
		cout<<count<<endl;	
	}
	
	return 0;
}
