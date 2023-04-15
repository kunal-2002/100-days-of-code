/**
 *Problem Statement:     a Program to find the array type.
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
		
		cout<<"Enter elements:\n";
		for(int i=0;i<size;i++)
			cin>>arr[i];
		
		int odd = 0, even = 0;
		
		for(int i = 0; i<size; i++){
			if(arr[i]%2 == 0)
				even++;
			if(arr[i]%2 == 1)
				odd++;
		}
		if(odd == size)
			cout<<"Odd";
		else if(even == size)
			cout<<"Even";
		else
			cout<<"Mixed";
		
		cout<<endl;
	}
	return 0;
}
