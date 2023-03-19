/**
 *Problem Statement:  a program to Add two fractions.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <iostream>

using namespace std;

int gcd(int a, int b){
	if(a == 0)
		return b;
	return gcd(b%a, a);
}

void simplify(int &y3, int &x3){
	int common_factor = gcd(x3,y3);
	
	y3 = y3/common_factor;
	x3 = x3/common_factor;
}

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int x1, y1, x2, y2, x3, y3;
		cin>>x1>>y1;
		cin>>x2>>y2;
		
		x3 = x1*y2 + x2*y1;
		y3 = y1*y2;
		simplify(y3, x3);
		cout<<x3<<"/"<<y3<<endl;
	}
	return 0;
}
