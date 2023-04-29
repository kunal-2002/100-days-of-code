/**
 *Problem Statement:    PASS OR FAIL
	Anusree is struggling to pass a certain college course.
	The test has a total of N question, each question carries 3 marks for a correct answer and -1 for an incorrect answer. Anusree is a risk-averse person so he decided to attempt all the questions. It is known that Anusree got X questions correct and the rest of them incorrect. For Anusree to pass the course he must score at least P marks.
	Will Anusree be able to pass the exam or not?
	Input Format
	First line will contain T, number of testcases. Then the testcases follow.
	Each testcase contains of a single line of input, three integers N, X, P.
	Output Format
	For each test case output ""PASS"" if Chef passes the exam and ""FAIL"" if Chef fails the exam.
	You may print each character of the string in uppercase or lowercase (for example, the strings ""pAas"", ""pass"", ""Pass"" and ""PASS"" will all be treated as identical).
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int N, X, P;
		cin>>N>>X>>P;
		if((X*3 - (N-X)) >= P){
			cout<<"PASS"<<endl;
		}
		else{
			cout<<"FAIL"<<endl;
		}
	}
	return 0;
}
