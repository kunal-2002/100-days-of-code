/**
 *Problem Statement:     a Program to print Non-repeating characters in a string.
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
		cout<<"Enter a string:\t";
		cin>>str;
		
		int freq[256] = {0};
		
		for(int i = 0; str[i] != '\0'; i++){
			freq[str[i]]++;
		}
		
		for(int i = 0; i<256; i++){
			if(freq[i] == 1){
				cout<<char(i)<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
