/**
 *Problem Statement: a program to find Number of days in a given month of a given year.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <iostream>
using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		
		int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		int month, year;
		
		cout<<"Enter Month:\t";
		cin>>month;
		cout<<"Enter Year:\t";
		cin>>year;
		
		if(month<=12 && month>=1){
			if(month==2 && ((year%400==0) || ((year%100!=0) && (year%4==0))))
				cout<<days[month-1] + 1;
			else
				cout<<days[month-1];
		}
		else{
			cout<<"Please enter relevant values.";
		}
		cout<<endl;
	}
	
	return 0;
}
