/**
 *Problem Statement:    a Program to concatenate a string.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		string str1, str2;
		cout<<"Enter first string:\t";
		cin>>str1;
		cout<<"Enter second string:\t";
		cin>>str2;
		strcat(str1,str2);
		cout<<"Concatenated String: "<<str1<<endl;  
	}
	return 0;
}
