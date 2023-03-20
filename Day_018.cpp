/**
 *Problem Statement:  a program to Add two fractions.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <iostream>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int x1, y1, x2, y2, x3, y3, Div, i;
		cout<<"Enter value for x1 and y1:\n";
		cin>>x1>>y1;
		cout<<"Enter value for x2 and y2:\n";
		cin>>x2>>y2;
		
		x3 = x1*y2 + x2*y1;
		y3 = y1*y2;
		
		if(x3>y3)
			Div = y3;
		else
			Div = x3;
			
		for(i = Div; i>0;i--){
			if(x3%i==0 && y3%i==0){
				x3 = x3/i;
				y3 = y3/i;
			}
		}
		
		cout<<"Sum of two fractions is "<<x3<<"/"<<y3<<endl;
	}
	return 0;
}
