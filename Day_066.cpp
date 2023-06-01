/**
 *Problem Statement:    Palindromic substrings: Anoop likes strings a lot but he likes palindromic strings more. 
 	Today, Anoop has two strings A and B, each consisting of lower case alphabets.Anoop is eager to know whether 
 	it is possible to choose some non empty strings s1 and s2 where s1 is a substring of A, s2 is a substring of B 
 	such that s1 + s2 is a palindromic string. Here '+' denotes the concatenation between the strings.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		string s1="" , s2="";
		cin>>s1>>s2;
		int flag = 0;
		for(int i=0; i<s1.size();i++){
			for(int j=0; j<s2.size();j++){
				if(s1[i] == s2[j])
					flag++;
			}
		}
		
		if(flag>0)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
