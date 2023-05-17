/**
 *Problem Statement:  Bucket Filling
 	Nejiya has a bucket having a capacity of K liters. It is already filled with X liters of water.
	Find the maximum amount of extra water in liters that Nejiya can fill in the bucket without overflowing.  
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int K, X;
		cin>>K>>X;
		cout<<K-X<<"\n";
	}
	return 0;
}
