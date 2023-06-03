/**
 *Problem Statement:    Alice and Bob went to a pet store. There are N animals in the store where the ith animal is 
 		of type Ai?.Alice decides to buy some of these N animals. Bob decides that he will buy all the animals left 
		in the store after Alice has made the purchase.Find out whether it is possible that Alice and Bob end up with 
		exactly same multiset of animals.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

#define ll  long long
#define endl "\n"

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		ll n;
		cin>>n;
		ll a[n];
		map<ll,ll>mp;
		set<ll>s;
		bool ok = true;
		for(int i=0; i<n; i++){
			cin>>a[i];
			mp[a[i]]++;
			s.insert(a[i]);
		}
		for(auto it = s.begin(); it!=s.end();it++){
			ll temp = mp[*it];
			if(temp%2){
				ok = false;
			}
		}
		if(ok){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
