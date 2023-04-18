/**
 *Problem Statement:     a  Program to find longest palindrome in an array.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

bool ispalindrome(int num){
	int rev_num = 0, temp = num;
	
	while(temp>0){
		rev_num = rev_num*10 + temp%10;
		temp = temp/10;
	}
	
	if(rev_num == num)
		return true;
	else
		return false;
}

int longest_palindrome(int arr[], int size){
	
}

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
		
		int res = INT_MIN;
		for(int i=0; i<size;i++){
			if(ispalindrome(arr[i]) && res<arr[i])
				res = arr[i];
		}
		if(res == INT_MIN)
			res = -1;
			
		cout<<"Longest palindrome: "<<res;
				
	}
	return 0;
}
