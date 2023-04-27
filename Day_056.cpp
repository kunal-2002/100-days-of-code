/**
 *Problem Statement:    a program to find whether the numbers of an array be made equal.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int convert(int arr[], int n){
	int flag = 1;
	for(int i=0; i<n; i++){
		while(arr[i]%2 == 0)
			arr[i] /= 2;
		while(arr[i]%3 == 0)
			arr[i] /= 3;
	}
	for(int i=1; i<n; i++){
		if(arr[i] != arr[0])
			flag = 0;
	}
	return flag;
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
		if(convert(arr,n) == 1)
			cout<<"Yes";
		else
			cout<<"No";
		cout<<endl;
	}
	return 0;
}
