/**
 *Problem Statement: a program to find roots of a quadratic equation.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		float a, b, c, root1, root2, d, real, img;
		cout<<"Enter the value of a, b and c:\t";
		cin>>a>>b>>c;
		
		d = b*b - 4*a*c;
		
		if(d == 0){
			cout<<"Roots are real and equal\n";
			root1 = -b/(2*a);
			cout<<"Root1 = Root2 = "<<root1<<endl;
		}
		else if(d > 0){
			root1 = (-b + sqrt(d)) / (2*a);
			root2 = (-b - sqrt(d)) / (2*a);
			cout<<"Roots are real and unequal\n";
			cout<<"Root1 = "<<root1<<" Root2 = "<<root2<<endl;
		}
		else{
			real = -b/(2*a);
			img = sqrt(-d)/(2*a);
			cout<<"Roots are complex and unequal\n";
			cout<<"Root1 = "<<real<<"+"<<img<<"i";
			cout<<" Root2 = "<<real<<"-"<<img<<"i"<<endl;
		}
	}
	
	return 0;
}
