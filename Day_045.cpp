/**
 *Problem Statement:     a Program to find smallest and largest element in an array.
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
		
		int small, large;
		
		small = arr[0];
		large = arr[0];
		
		for(int i=0;i<size;i++){
			if(arr[i] < small)
				small = arr[i];
			if(arr[i] > large)
				large = arr[i];
		}
		
		cout<<"Smallest Number:\n"<<small<<endl;
		cout<<"Largest Number:\n"<<large<<endl;			
	}
	return 0;
}
