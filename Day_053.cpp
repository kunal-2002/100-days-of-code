/**
 *Problem Statement:    Given an integer array of size N. Write Program to find 
 						maximum product subarray in a given array.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int MaxSubArrProd(int arr[], int n){
	int ans = arr[0];
	for(int i = 0;i<n; i++){
		int prod = arr[i];
		for(int j = i+1;j<n;j++){
			ans = max(ans,prod);
			prod = prod*arr[j];
		}
		ans = max(ans, prod);
	}
	return ans;
}
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
		
		cout<<MaxSubArrProd(arr,n)<<endl;
		
	}
	return 0;
}
