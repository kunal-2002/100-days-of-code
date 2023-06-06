/**
 *Problem Statement:    Gru has a string S of length N, consisting of only characters a and b for banana and P 
 		points to spend.Now Gru wants to replace and/or re-arrange characters of this given string to get the 
		lexicographically smallest string possible. For this, he can perform the following two operations any 
		number of times.Swap any two characters in the string. This operation costs 11point. (any two, need not 
		be adjacent).Replace a character in the string with any other lower case english letter. This operation 
		costs 2 points.Help Gru in obtaining the lexicographically smallest string possible, by using at most P 
		points.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>
#include <fstream>
#include <cmath>

typedef long long int ll;

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);		
	int T;
	cin>>T;
	
	while(T--){
		int n, p;
		cin>>n>>p;
		bool check[n];
		memset(check,false, sizeof(check));
		string s;
		cin>>s;
		int arr[n];
		memset(arr, 0, sizeof(arr));
		int count1 = 0;
		int count2 = 0;
		for(int i=0; i<n; i++){
			arr[i] = int(s[i]);
			if(s[i] == 'a'){
				count1++;
			}
		}
		int count = 0;
		for(int i=0; i<count1; i++){
			if(arr[i] == int('b')){
				count++;
			}
		} 
		int i=0; 
		int k = p; 
		int w = count;
		while(i<count1 && k>0 && w>0){
			if(arr[i] == int('b')){
				arr[i] = int('a');
				k--;
				w--;
			}
			i++;
		}
		i = n-1;
		k = p;
		w = count;
		while(i>=count1 && k>0 && w>0){
			if(arr[i] == int('a')){
				arr[i] = int('b');
				check[i] = true;
				k--;
				w--;
			}
			i--;
		}
		if(k>0){
			int i = count1;
				while(i<n &&k>0){
					if(check[i]==false){
						if(k>1)
						{
							k-=2;
							arr[i] = int('a');
						}
					}
					else{
						k--;
						arr[i] = int('a');
					}
					i++;
				}
		}
		
		for(int i=0;i<n;i++){
			cout<<char(arr[i]);
		}
		cout<<endl;
	}
	return 0;
}
