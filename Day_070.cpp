/**
 *Problem Statement:    Given an array, rotate the array by one position in clock-wise direction.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	cin>>N;
	
	int arr[N];
	
	for(int i=0; i<N; i++){
		cin>>arr[i];
	}
	
	int length = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0; i<1;i++){
		int j, last;
		last = arr[length-1];
		for(j = length-1;j>0;j--){
			arr[j] = arr[j-1];
		}
		
		arr[0] = last;
	}
	
	cout<<"\n";
	for(int i=0;i<length;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
