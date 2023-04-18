/**
 *Problem Statement:     a Program to find sum of elements in an array.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int size;
		cout<<"Enter size of array:\n";
		cin>>size;
		
		int arr[size];
		cout<<"Enter the elements:\n";
		for(int i=0;i<size;i++)
			cin>>arr[i];
		
		int sum = 0;
		
		for(int i=0;i<size;i++){
			sum += arr[i];
		}
		
		cout<<sum<<endl;		
	}
	return 0;
}
