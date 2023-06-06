/**
 *Problem Statement:    You are given N binary strings of length N each. You need to find a binary string of length 
 		N which is different from all of the given strings.Note:A binary string is defined as a string consisting 
		only of '0' and '1'.A string is considered different from another string when they have different lengths, 
		or when they differ in at least one position.
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
		string res = "";
		for(int i=0;i<n;i++)
			res += "0";
		vector<string>binary(n);
		for(int i = 0;i< n;i++)
			cin >> binary[i];
 		for(int i = 0;i < n;i++){
 			if(binary[i][i] == '0')
			 	res[i] = '1';
 		}
 		cout << res << endl;
	}
	return 0;
}
