/**
 *Problem Statement:    Chess Format: Given the time control of a chess match as a+b, 
	determine which format of chess out of the given 4 it belongs to: Bullet (if a+b<3), 
	Blitz (if 3<=a+b<=10), Rapid (if 11<=a+b<=60) or Classical (if 60<a+b).
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int a, b;
		cin>>a>>b;
		
		if((a+b)<3){
			cout<<"1"<<endl;
 		}
 		else if(((a+b)>=3)&&((a+b)<=10)){
			cout<<"2"<<endl;
 		}
 		else if(((a+b)>=11)&&((a+b)<=60)){
			cout<<"3"<<endl;
 		}
		else{
			cout<<"4"<<endl;
 		}
	}
	return 0;
}
