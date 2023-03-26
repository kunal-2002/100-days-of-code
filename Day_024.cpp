/**
 *Problem Statement:    a program to print Pyramid pattern using stars.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <iostream>

using namespace std;


int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int rows;
		cout<<"Enter number of rows:\t";
		cin>>rows;
		
		for(int i = 1;i<=rows;++i){
			for(int j = 1;j<=i;++j){
				cout<<"*"<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
