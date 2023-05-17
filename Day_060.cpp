/**
 *Problem Statement:    Good Weather: The weather report of Magicland is Good if the number of sunny days in a week 
 	is strictly greater than the number of rainy days.Given 7 integers A1,A2,A3,A4,A5,A6,A7 where Ai=1 denotes 
	that the ith day of week in Magicland is a sunny day, Ai=0 denotes that the ith day in Magicland is a rainy day. 
	Determine if the weather report of Magicland is Good or not.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int arr[7];
		for(int i=0; i<7; i++){
			cin>>arr[i];
		}
		int a = 0, b = 0;
		for(int j=0; j<7;j++){
			if(arr[j] == 1){
				a++;
			}
			else{
				b++;
			}
		}
		if(a>b)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
