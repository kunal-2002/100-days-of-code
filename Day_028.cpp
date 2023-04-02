/**
 *Problem Statement:    a Program to reverse a string.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

void revStr(string& str){
	int len = str.length();
	
	for(int i=0; i<len/2; i++){
		swap(str[i], str[len - i - 1]);
	}
}

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		string str;
		cout<<"Enter a string:\t";
		
		cin>>str;
		revStr(str);
		cout<<"Reversed string is:\t"<<str<<endl;
		      
	}
	return 0;
}
