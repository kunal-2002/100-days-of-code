/**
 *Problem Statement:     a Program to Capitalize the first and last letter of each word of a string.
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
		
		int length = str.length();
		
		for(int i = 0; i<length; i++){
			if(i==0 || i==(length-1)){
				str[i] = toupper(str[i]);
			}
			else if(str[i] == ' '){
				str[i-1] = toupper(str[i-1]);
				str[i+1] = toupper(str[i+1]);
			}
		}
		
		cout<<str<<endl;
	}
	return 0;
}
