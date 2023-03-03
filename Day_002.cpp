/**
 *Problem Statement: a program to identify if the character is an alphabet or not.
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

		if((c>='a' && c<='z') || (c>='A' && c<='Z'))	
			cout<<"\nAlphabet"; 
		else
			cout<<"\nNot an alphabet";
			
		cout<<"\n";
	}
	
	return 0;
}
