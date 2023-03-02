/**
 *Problem Statement: a program to identify if the character is a vowel or consonant.
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
		bool isLowerVowel, isUpperVowel;
		
		cin>>c;
		
		isLowerVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
		isUpperVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');


		if(!isalpha(c))	
			cout<<"\nInvalid Input";
		else if (isLowerVowel || isUpperVowel)
			cout<<"\nVowel";
		else
			cout<<"\nConsonant";
	}
	
	return 0;
}
