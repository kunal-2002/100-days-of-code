/**
 *Problem Statement:    a program to express a number as a sum of two prime numbers.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <iostream>

using namespace std;

bool check_prime(int num){
	bool is_prime = true;
	
	if(num == 0 || num == 1){
		is_prime = false;
	}
	
	for(int i=2; i<=num/2; ++i){
		if(num%i == 0){
			is_prime = false;
			break;
		}
	}
	
	return is_prime;
}
	

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int n, i;
  		bool flag = false;

  		cout << "Enter a number:\t";
  		cin >> n;

  		for(i = 2; i <= n/2; ++i) {
    		if (check_prime(i)) {
      			if (check_prime(n - i)) {
        			cout << n << " can be expressed as sum of " << i << " and " << n-i << endl;
        			flag = true;
      			}
    		}
  		}

  		if (!flag)
    		cout << n << " can't be expressed as sum of two prime numbers.";
	}
	return 0;
}
