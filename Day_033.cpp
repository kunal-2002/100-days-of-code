/**
 *Problem Statement:     a Program to check if String is a palindrome or not.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;


int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		string str;
		int i, len =0, flag = 0;
		cout<<"Enter a string:\t";
		
		cin>>str;
		len = str.length();
		
		for(i=0;i<len/2;i++){
			if(str[i] == str[len - i - 1])
				flag++;
		}
		
		if(flag == i){
			cout<<"Palindrome"<<endl;
		}
		else{
			cout<<"Not a Palindrome"<<endl;
		}
	}
	return 0;
}
