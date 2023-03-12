
/**
 *Problem Statement: a program to find Fibonacci series up to n.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <iostream>

using namespace std;


int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int n, f1, f2, nextTerm;
		f1 = 0;
		f2 = 1;
		nextTerm = 0;
		
		cin>>n;
		
		for(int i = 1; i<=n; ++i){
			if(i == 1){
				cout<< f1;
				continue;
			}
			if(i == 2){
				cout << ", "<< f2;
				continue;
			}
			nextTerm = f1 + f2;
			f1 = f2;
			f2 = nextTerm;
			
			cout<< ", "<< nextTerm;
		}
		
		cout<<endl;
		
	}
	
	return 0;
}
