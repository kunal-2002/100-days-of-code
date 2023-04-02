/**
 *Problem Statement:    a Program to print Length of the string without using strlen() function.
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
		int length = 0;
		
		cout<<"Enter a string:\t";
		cin>>str;
		
		for(int i = 0;str[i]!='\0';++i){
			length++;
		}
		
		cout<<"Length of the string is: "<<length<<endl;
	}
	return 0;
}
