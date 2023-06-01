/**
 *Problem Statement:    You will be given queries. Each query is of one of the following three types: 
 		Add an element to the set, Delete an element from the set. (If the number is not present in the set, 
		then do nothing), If the number is present in the set, then print "Yes"(without quotes) else print 
		"No"(without quotes).
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, a;
	cin>>t;
	set<int> s;
	set<int> :: iterator it;
	while(t--){
		cin>>n>>a;
		if(n==1)
			s.insert(a);
		else if(n==2){
			if(s.find(a) != s.end())
				s.erase(a);
		}
		else if(n==3){
			if(s.find(a) != s.end())
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
	}
	return 0;
}
