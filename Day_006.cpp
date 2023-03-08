/**
 *Problem Statement: a program to find the Quadrant in which coordinate lies.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
 	
	
#include <iostream>
using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int x, y;
		cin>>x>>y;
 		if (x > 0 && y > 0)
 			cout<<"This point lies in the first quadrant.";
 		else if (x < 0 && y > 0)
 			cout<<"This point lies in the second quadrant.";
 		else if (x < 0 && y < 0)
 			cout<<"This point lies in the third quadrant.";
 		else if (x > 0 && y < 0)
 			cout<<"This point lies in the fourth quadrant.";
 		else if (x == 0 && y == 0)
 			cout<<"This point lies at the orgin.";
	}
	
	return 0;
}
