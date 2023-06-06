/**
 *Problem Statement:    There are N stones in a pond, each having a value Ai? written on it. A frog is at stone 1 
 		and wants to reach stone N. The frog can jump from a stone i to any stone j(j>i). Let d be the length of 
		subarray (i.e. j-i+1), then the energy required for the jump is (d·Ai?)-Aj?. Find the minimum non-negative 
		amount of energy required by the frog to reach the N-th stone.Note: It is possible that the total amount of 
		energy required is negative, in that case, you should print the minimum non-negative value (i.e. 0).
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int n;
		cin>>n;
		int A[n];
		for(int i=0; i<n; i++){
			cin>>A[i];
		}
		int ans = 0;
		int a = 0;
		for(int i=1; i<n; i++){
			if(A[i]<A[a]){
				ans += (i-a+1)*A[a] - A[i];
				a=i;
			}
		}
		if(a!= n-1)
			ans += (n-1-a+1)*A[a]-A[n-1];
		if(ans>0)
			cout<<ans<<endl;
		else
			cout<<0<<endl;
	}
	return 0;
}
