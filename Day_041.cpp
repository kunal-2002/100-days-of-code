/**
 *Problem Statement:     a Program to Check if two strings match where one string contains wildcard characters.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

bool checking(char* A, char* B){
	if(*A == '\0' && *B == '\0')
		return true;
	if(*A == '*' && *(A+1) != '\0' && *B == '\0')
		return false;
	if(*A == '?' || *A == *B)
		return checking(A+1,B+1);
	if(*A == '*')
		return checking(A+1,B) || checking(A, B+1);
	return false;
}

void testing(char* A, char* B){
	checking(A,B)?puts("Yes"):puts("No");
}

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		char A[20], B[20];
		cout<<"Enter first string with wild characters:\t";
		cin>>A;
		cout<<"Enter second string without wild characters:\t";
		cin>>B;
		
		testing(A,B);
		
		cout<<endl;
		
	}
	return 0;
}
