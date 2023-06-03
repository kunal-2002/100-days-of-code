/**
 *Problem Statement:    You have a grid with N rows and M columns. You have two types of tiles — one of dimensions 
 		2×2 and the other of dimensions 1×1. You want to cover the grid using these two types of tiles in such a way 
		that: Each cell of the grid is covered by exactly one tile; and The number of 1×1 tiles used is minimized.
		Find the minimum number of 1×1 tiles you have to use to fill the grid.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	cout<<"Enter number of test cases:\t";
	ll T;
	cin>>T;
	
	while(T--){
		int n, m;
		cin>>n>>m;
		if(n%2==0 && m%2==0){
			cout<<0<<endl;
		}
		else if(n%2==0 && m%2!=0){
			cout<<n<<endl;
		}
		else if(n%2!=0 &&  m%2==0){
			cout<<m<<endl;
		}
		else{
			cout<<n+m-1<<endl;
		}
	}
	return 0;
}
