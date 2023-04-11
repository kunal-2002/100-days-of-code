/**
 *Problem Statement:     a Program to Replace substring in a string.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

void replace_substr(char str[], char sub[], char nstr[]){
	int strLen, sublen, nstrlen;
	int i = 0, j, k;
	int flag = 0, start, end;
	
	strLen = strlen(str);
	sublen = strlen(sub);
	nstrlen = strlen(nstr);
	
	for(i =0; i<strLen; i++){
		flag = 0;
		start = i;
		
		for(j = 0; str[i] == sub[j];j++,i++){
			if(j == sublen-1)
				flag = 1;
		}
		end = i;
		if(flag == 0)
			i -= j;
		else{
			for(j = start; j<end; j++){
				for(k = start; k<strLen; k++)
					str[k] = str[k+1];
				strLen--;
				i--;
			}
			
			for(j=start;j<start+nstrlen;j++)
            {
                for(k=strLen;k>=j;k--)
                    str[k+1]=str[k];

                str[j]=nstr[j-start];
                strLen++;
                i++;
            }
		}
	}	
}

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		char str[20], substr[20], newstr[20];
		cout<<"Enter a string:\n";
		cin>>str;
		cout<<"Enter the substring to be removed:\n";
		cin>>substr;
		cout<<"Enter the new substring:\n";
		cin>>newstr;
		
		replace_substr(str,substr, newstr);
		
		cout<<"The new string:\n"<<str<<endl;
	}
	return 0;
}
