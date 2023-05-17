/**
 *Problem Statement:    Gold Mining: Anusree has decided to go to a gold mine along with N of his friends 
 	(thus, total N+1 people including Anusree go to the gold mine).The gold mine contains a total of X kg of gold. 
	Every person has the capacity of carrying up atmost Y kg of gold.Will Anusree and his friends together be able 
	to carry up all the gold from the gold mine assuming that they can go to the mine exactly once.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int N, X, Y;
		cin>>N>>X>>Y;
		if(((N+1)*Y) >= X){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
