/**
 *Problem Statement:    Bricks Breaking: For her next karate demonstration, Arunima will break some bricks.
 	Arunima stacked three bricks on top of each other. Initially, their widths (from top to bottom) are 
	W1,W2,W3.Arunima strength is S. Whenever she hits a stack of bricks, consider the largest k=0 such that 
	the sum of widths of the topmost k bricks does not exceed S; the topmost k bricks break and are removed from 
	the stack. Before each hit, Arunima may also decide to reverse the current stack of bricks, with no cost.
	Find the minimum number of hits Arunima needs in order to break all bricks if she performs the reversals 
	optimally. You are not required to minimize the number of reversals.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int count = 0;
		int s, a, b, c;
		cin>>s>>a>>b>>c;
		
		if((a+b+c) <= s){
			count = 1;
		}
		
		else if((a+b)<=s || (c+b)<=s ){
			count = 2;
		}  
		else{
			count = 3;
		}
		cout<<count<<endl;
	}
	return 0;
}
