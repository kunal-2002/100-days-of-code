/**
 *Problem Statement:    A string is called boring if all the characters of the string are same.You are given a string 
 	S of length N, consisting of lowercase english alphabets. Find the length of the longest boring substring of S 
	which occurs more than once.Note that if there is no boring substring which occurs more than once in S, 
	the answer will be 00.A substring is obtained by deleting some (possibly zero) elements from the beginning 
	of the string and some (possibly zero) elements from the end of the string.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int n;
		cin>>n;
		string str;
		cin>>str;
		
		string res = "";
		unordered_set<string> s;
		res = str[0];
		
		int I, mx, sum;
		I = mx = 0;
		sum = 1;
		for(int i=1; i<n; i++){
			if(str[i-1]!=str[i]){
				if(mx<sum){
					mx = sum;
					mx--;
				}
				if(s.find(res) != s.end())
					I = max(I, sum);
				s.insert(res);
				res = str[i];
				sum = 1;
			}
			else{
				sum++;
				res+=str[i];
			}
		}
		if(s.find(res)!=s.end()){
			I = max(I, sum);
		}
		else{
			if(mx<sum){
				mx = sum;
				mx--;
			}
		}
		int ans = max(I,mx);
		cout<<ans<<endl;
	}
	return 0;
}
