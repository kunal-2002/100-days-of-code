/**
 *Problem Statement:    Given an integer array of size N, write a program to sort the array.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

//Quick Sort Method

int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = (low - 1);
	
	for(int j = low; j <= high; j++){
		if(arr[j] < pivot){
			i++;
			swap(arr[i], arr[j]);
		}
	}
	
	swap(arr[i+1], arr[high]);
	return (i+1);
}

void quickSort(int arr[], int low, int high){
	if(low<high){
		int pi = partition(arr, low, high);
		
		quickSort(arr, low, pi-1);
		quickSort(arr, pi+1, high);
	}
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
		}
		
		quickSort(arr, 0, n-1);
		
		for(int i = 0; i<n; i++)
			cout<< arr[i]<<" ";
		
		cout<<endl;
	}
	return 0;
}
