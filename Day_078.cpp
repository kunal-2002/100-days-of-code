/**
 *Problem Statement:    For a given array B1?,B2?,…,BM? of length at least 3, let's define its weight as the largest 
 		value of (Bi?-Bj?)·(Bj?-Bk?) over all possible triples (i,j,k) with 1=i,j,k=M and i!=j, j!=k, k!=i.You are 
		given a sorted array A1?,A2?,…,AN? (that is, A1?=A2?=…=AN?).Calculate the sum of weights of all contiguous 
		subarrays of A of length at least 3. That is, count the sum of weights of arrays [Ai?,Ai+1?,…,Aj?] over all 
		1=i< j=N with j-i=2.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

long long int wt(long long int i, long long int j, long long int k){
	return (long long int)(j-i)*(k-j);
}

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int n;
		cin>>n;
		long long int A[n];
		for(int i=0; i<n; i++){
			cin>>A[i];
		}
		long long int sum = 0L;
		for(int i=0; i<n; i++){
			for(int j=i+2;j<n;j++){
				long long int k = (A[i]+A[j])/2L;
				auto u = upper_bound(A+i+1,A+j,k);
				auto l = u-1;
				sum = sum+max(wt(A[i],*l, A[j]), 0LL);
			}
		}
		cout<<sum<<"\n";
	}
	return 0;
}
