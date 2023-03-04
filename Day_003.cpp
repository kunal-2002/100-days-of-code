/**
 *Problem Statement: a program to find ASCII values of a character
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
 
 
#include <iostream>
using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		char c;
		
		cin>>c;

		cout<<int(c)<<endl;
	}
	
	return 0;
}
