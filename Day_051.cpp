/**
 *Problem Statement:    Given an integer array of size N. Write Program to find sum of positive 
						square elements in the array.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int solve(int arr[], int n){
	if(n==0 || n==1)
		return n;
	
	int temp[n];
	
	int j=0;
	
	for(int i=0;i<n-1;i++){
		if(arr[i] != arr[i+1])
			temp[j++] = arr[i];
	}
	
	temp[j++] = arr[n-1];
	
	for(int i=0;i<j;i++){
		arr[i] = temp[i];
	}
	
	return j;
	
}

long long int SumOfSquares(int arr[], int n){
	long long int sum = 0;
	
	for(int i=0; i<n; i++){
		
		sum = sum + arr[i]*arr[i];
	}
	
	return sum;
}

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int n;
		cin>>n;
		int arr[n];
		
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i]<0){
				arr[i] = -arr[i];
			}
		}
		
		sort(arr, arr+n);
		
		n = solve(arr, n);
		
		cout<<SumOfSquares(arr, n)<<endl;
		
	}
	return 0;
}
