/**
 *Problem Statement:     a Program to check if two arrays are the same or not.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int sort(int arr[], int n){
	int i, j;
	for(i=0; i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int compare(int arr1[], int arr2[], int n, int m){
	sort(arr1, n);
	sort(arr2, m);
	int i;
	for(i=0; i<n;i++){
		if(arr1[i] != arr2[i]){
			return 0;
		}
	}
	return 1;
}

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int n1, n2;
		cout<<"Enter the size of first array:\n";
		cin>>n1;
		cout<<"Enter the size of second array:\n";
		cin>>n2;
		int arr1[n1];
		int arr2[n2];
		
		
		cout<<"Enter the first array elements:\n";
		for(int i = 0; i<n1;i++)
			cin>>arr1[i];
		
		
		cout<<"Enter the second array elements:\n";
		for(int j = 0; j<n2;j++)
			cin>>arr2[j];
		
		if(compare(arr1, arr2, n1, n2) == 0)
			cout<<"Not Same";
		else
			cout<<"Same";
			
		cout<<endl;
	}
	return 0;
}
