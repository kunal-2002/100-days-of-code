/**
 *Problem Statement:    Kulyash is given an integer N. His task is to break N into
    some number of (integer) powers of 2. To achieve this, he can perform the
    following operation several times (possibly, zero): Choose an integer X which he
    already has, and break X into 2 integer parts (Y and Z) such that X=Y+Z. Find the
    minimum number of operations required by Kulyash to accomplish his task.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

bool isPowerOf2(ll n){
	return(ceil(log2(n)) == floor(log2(n)));
}

long long binpow(long long a, long long b){
	long long res = 1;
	while(b>0){
		if(b&1)
			res = res*a;
		a = a*a;
		b >>= 1;
	}
	return res;
}

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;

	while(T--){
		ll n;
		cin>>n;
		if(isPowerOf2(n) == true)
			cout<<"0\n";
		else{
			int cnt = 0;
			ll temp = n;
			while(isPowerOf2(temp) == false){
				cnt++;
				temp = temp - binpow(2, log2(temp));
			}
			cout<<cnt<<"\n";
		}
	}
	return 0;
}
