/**
 *Problem Statement:    You are given an array A of N elements. For any ordered triplet (i,j,k) such that i, j, 
 		and k are pairwise distinct and 1=i,j,k=N, the value of this triplet is (Ai?-Aj?)·Ak?. You need to find the 
		maximum value among all possible ordered triplets.Note: Two ordered triplets (a,b,c) and (d,e,f) are only 
		equal when a=d and b=e and c=f. As an example, (1,2,3) and (2,3,1) are two different ordered triplets.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		long long int n;
		cin>>n;
		vector<int>  v;
		for(int i=0; i<n; i++){
			long long int num;
			cin>>num;
			v.push_back(num);
		}
		sort(v.begin(),v.end());
		long long int ans = (long long int)(v[n-1]-v[0])*v[n-2];
		cout<<ans<<'\n';
	}
	return 0;
}
