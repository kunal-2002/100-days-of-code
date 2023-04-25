/**
 *Problem Statement:    Given an integer array of size N. Write Program to find whether 
 						Arrays are disjoint or not. Two arrays are said to be disjoint 
						if they have no elements in common.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

bool checkDisjoint(int arr1[], int arr2[], int n1, int n2){
	bool flag = true;
	
	for(int i=0; i<n1;i++){
		for(int j=0;j<n2;j++){
			if(arr1[i] == arr2[j]){
				flag = false;
			}
		}
		if(flag == false){
			break;
		}
	}
	return flag;
}

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int n1, n2;
		cin>>n1;
		int arr1[n1];
		
		for(int i=0; i<n1; i++)
			cin>>arr1[i];

		cin>>n2;
		int arr2[n2];
		
		for(int i=0; i<n2; i++)
			cin>>arr2[i];			
		
		if(checkDisjoint(arr1,arr2,n1,n2)){
			cout<<"Disjoint";
		}
		else{
			cout<<"Not Disjoint";
		}
		cout<<endl;
	}
	return 0;
}
