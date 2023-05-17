/**
 *Problem Statement:    New Tablet: Ajinkya decided to buy a new tablet. His budget is B, so he cannot buy a tablet 
 		whose price is greater than B. Other than that, he only has one criterion — the area of the tablet's screen 
		should be as large as possible. Of course, the screen of a tablet is always a rectangle.Ajinkya has visited 
		some tablet shops and listed all of his options. In total, there are N available tablets, numbered 1 through 
		N. For each valid i, the i-th tablet has width Wi, height Hi and price Pi.Help Ajinkya choose a tablet which 
		he should buy and find the area of such a tablet's screen, or determine that he cannot buy any tablet.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int N, B;
		cin>>N>>B;
		int max = -1;

		for(int i=0; i<N; i++){
			int w, h, p;
			cin>>w>>h>>p;
			int area = w*h;
			
			if(p <= B){
				if(area > max){
					max = area;
				}
			}
		}
		
		if(max == -1){
			cout<<"no tablet\n";
		}
		else{
			cout<<max<<"\n";
		}
		
		
		
	}
	return 0;
}
