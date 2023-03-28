/**
 *Problem Statement:    a program to calculate Maximum number of handshakes.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <iostream>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int n;
		cout<<"Enter number of peoples in te room:\t";
		cin>>n;
		
		
		cout<<n*(n-1)/2<<endl;             
	}
	return 0;
}
