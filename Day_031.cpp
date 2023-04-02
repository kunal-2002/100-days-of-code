/**
 *Problem Statement:     a Program to Toggle each character in a string.
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
		
		
		for(int i = 0; str[i]!='\0'; i++){
			if(str[i] >= 'A' && str[i] <= 'Z'){
				str[i] = str[i] + 32;
			}
			else if(str[i] >= 'a' && str[i] <= 'z'){
				str[i] = str[i] - 32;
			}
		}
		
		cout<<"Toggled string: "<<str<<endl;
	}
	return 0;
}
