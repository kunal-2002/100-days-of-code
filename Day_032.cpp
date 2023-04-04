/**
 *Problem Statement:     a Program to Remove vowels from a string.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

bool isVowel(char c){
	switch(c){
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
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
		
		cout<<"Enter a string:\t";
		cin>>s;
		
		for(i = 0;s[i] != '\0';i++){
			if(isVowel(s[i]) == 0){
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
