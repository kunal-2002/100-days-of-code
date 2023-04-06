/**
 *Problem Statement:     a Program to Count the sum of numbers in a string.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

bool isnum(char c){
	if(c >= '0' && c <= '9'){
		return 1;
	}
	else
		return 0;
}

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		string str;
		int len;
		int sum = 0;
		
		cout<<"Enter a string:\t";
		cin>>str;
		
		len = str.length();
		
		for(int i = 0;i<len;i++){
			if(isnum(str[i])){
				int digit;
				digit = str[i] - '0';
				
				sum += digit; 
			}
		}
		
		cout<<sum<<endl;
		
	}
	return 0;
}
