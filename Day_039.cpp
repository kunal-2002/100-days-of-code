/**
 *Problem Statement:     a Program to check if two strings are Anagram or not.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int isanagram(string str1, string str2){
	int freq1[26] = {0};
	int freq2[26] = {0};
	
	if(str1.length() != str2.length())
		return 0;
	
	for(int i = 0;str1[i]!='\0';i++){
		freq1[str1[i]-'a']++;
	}
	
	for(int i = 0;str2[i]!='\0';i++){
		freq2[str2[i]-'a']++;
	}
	
	for(int i=0; i<26; i++){
		if(freq1[i] != freq2[i])
			return 0;
	}
	return 1;
}

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		string str1, str2;
		cout<<"Enter two strings:\n";
		cin>>str1>>str2;
		
		if(isanagram(str1,str2))
			cout<<"Anagram"<<endl;
		else
			cout<<"Not Anagram"<<endl;
	}
	return 0;
}
