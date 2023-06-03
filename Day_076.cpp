/**
 *Problem Statement:    You are given N integers. In each step you can choose some K of the remaining numbers and 
 		delete them, if the following condition holds: Let the K numbers you've chosen be a1, a2, a3, ..., aK in 
		sorted order. Then, for each i = K - 1, ai+1 must be greater than or equal to ai * C.You are asked to 
		calculate the maximum number of steps you can possibly make.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

const int mxN = 3e5;
const ll INF = 2e18;
int n, k, c;
ll a[mxN];

ll mul(ll x, ll y){
	if((long double)x*y >= INF)
		return INF;
	return min(x*y,INF);
}

bool ok(int x){
	vector<ll>v(a,a+x);
	int ind = x;
	for(int r=1;r<k;++r){
		for(ll &i:v){
			ll need = mul(i,c);
			while(ind<n && a[ind]<need)
				++ind;
			if(ind==n)
				return 0;
			i = a[ind++];
		}
	}
	return 1;
}

void solve(){
	cin>>n>>k>>c;
	for(int i=0;i<n;++i)
		cin>>a[i];
	sort(a,a+n);
	int lb=0, rb=n/k;
	while(lb<rb){
		int mid = (lb+rb+1)/2;
		if(ok(mid))
			lb = mid;
		else
			rb = mid-1;
	}
	cout<<lb<<"\n";
}

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		solve();
	}
	return 0;
}
