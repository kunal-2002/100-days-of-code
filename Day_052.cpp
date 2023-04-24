/**
 *Problem Statement:    Given an integer array of size N, write a 
 						program to reverse the array.
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
		int arr[n];
		
		for(int i=0; i<n; i++)
			cin>>arr[i];
		
		reverse(arr, arr + n);
		
		for(int i = 0; i<n; i++)
			cout<< arr[i]<<" ";
		
		cout<<endl;
	}
	return 0;
}
