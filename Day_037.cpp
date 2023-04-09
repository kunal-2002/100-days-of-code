/**
 *Problem Statement:     a Program to calculate the Frequency of characters in a string.
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
			if(freq[i] != 0){
				cout<<"The frequency of "<<char(i)<<" is "<<freq[i]<<endl;
			}
		}
		
		cout<<endl;
	}
	return 0;
}
