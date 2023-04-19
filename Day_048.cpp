/**
 *Problem Statement:     a  Program to remove duplicate elements in an array.
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

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int size ;
		cout<<"Enter size of array:\n";
		cin>>size;
		
		int arr[size];
		cout<<"Enter the elements:\n";
		for(int i=0;i<size;i++)
			cin>>arr[i];
			
		size = solve(arr, size);
		
		for(int i=0; i<size; i++)
			cout<<arr[i]<<" ";
			
		cout<<endl;	
	}
	return 0;
}
