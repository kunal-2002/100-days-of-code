/**
 *Problem Statement: a program to find the Quadrant in which coordinate lies.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
 
 
#include <iostream>
using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int x, y;
		cin>>x>>y;
		
		if(x>=0){
			if(y>=0){
				cout<<"This point lies in first quadrant."<<endl;
			}
			else{
				cout<<"This point lies in fourth quadrant."<<endl;
			}
		}
		
		else{
			if(y>=0){
				cout<<"This point lies in second quadrant."<<endl;
			}
			else{
				cout<<"This point lies in third quadrant."<<endl;
			}
		}
	}
	
	return 0;
}
