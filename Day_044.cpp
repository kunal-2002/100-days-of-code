/**
 *Problem Statement:     a Program to find number of even and odd elements in an array.
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
		int even = 0, odd = 0;
		for(int i=0;i<size;i++){
			if(arr[i]%2 == 0)
				even++;
			else
				odd++;
		}
		
		cout<<"Number of even elements:\n"<<even<<endl;
		cout<<"Number of odd elements:\n"<<odd<<endl;		
	}
	return 0;
}
