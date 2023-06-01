/**
 *Problem Statement:    There are N students in a class, where the i-th student has a score of Ai?.The i-th student 
 	will boast if and only if the number of students scoring less than or equal Ai? is greater than the number 
	of students scoring greater than Ai?.Find the number of students who will boast.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int n, current=0;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i = n/2; i>=0; i--){
			if(a[i] != a[n/2]){
				current = i+1;
				break;
			}
		}
		cout<<n-current<<endl;
	}
	return 0;
}
