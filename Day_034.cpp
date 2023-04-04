/**
 *Problem Statement:     a Program to Remove brackets from an algebraic expression.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

bool isbracket(char c){
	switch(c){
		case '(':
		case ')':
			return 1;
		default:
			return 0;		
	}
}
int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		char s[100], t[100];
		int i, j = 0;
		
		cout<<"Enter an algebraic expression:\t";
		cin>>s;
		
		for(i = 0;s[i] != '\0';i++){
			if(isbracket(s[i]) == 0){
				t[j] = s[i];
				j++;
			}
		}
		t[j] = '\0';
		cout<<t;
		cout<<endl;
	}
	return 0;
}
