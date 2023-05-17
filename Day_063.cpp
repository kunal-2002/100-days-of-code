/**
 *Problem Statement:    Balancing Weight: No play and eating all day makes your belly fat. This happened to Manish 
 	during the lockdown. His weight before the lockdown was w1 kg (measured on the most accurate hospital machine) 
	and after M months of lockdown, when he measured his weight at home (on a regular scale, which can be inaccurate), 
	he got the result that his weight was w2 kg (w2>w1).Scientific research in all growing kids shows that their weights 
	increase by a value between x1 and x2 kg (inclusive) per month, but not necessarily the same value each month. Manish 
	assumes that he is a growing kid. Tell him whether his home scale could be giving correct results.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int w1,w2,x1,x2,m;
		cin>>w1>>w2>>x1>>x2>>m;
		int min = w1+m*x1;
		int max = w1+m*x2;
		if(w2<=max && w2>=min)
		{
			cout<<"1"<<"\n";
		}
		else
		{
		 	cout<<"0"<<"\n";
		}
	}
	return 0;
}
