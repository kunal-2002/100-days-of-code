
/**
 *Problem Statement: a program to find Factorial of a number.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <iostream>

using namespace std;

long long factorial(int n){
	
	if(n < 0)
			return -1;
	else if(n==0 || n==1)
		return 1;
	else
		return(n*factorial(n-1));
}

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int n;
		long long result;
		cout<<"Enter a number:\t";
		cin>>n;
		result = factorial(n);
		if(result == -1){
			cout<<"Factorial of negative number doesn't exists."<<endl;
		}
		else{
			cout<<n<<"! = "<<result<<endl;
		}
		
	}
	
	return 0;
}
