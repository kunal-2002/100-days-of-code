/**
 *Problem Statement:    Implement a simple editor. The editor maintains the content of a string S and have two following functions:
        "+ i x": insert a string x into the current string S after the i'th character of the S (we use 1-indexing in this problem). When i equals to 0 it mean we add x at the beginning of S.
        "? i len": Print the sub-string of length len starting at position i'th of S.At the beginning, the editor holds an empty string. 
		There will be Q queries of the two types described above.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;
#define ll long long
char c, d, e;
string a, b, f;
ll i, j, k, l, q;
char str[300005];

int main(){
	a = "";
	cin>>q;
	
	for(i = 0; i<q; i++){
		cin>>c>>l;
		if(c == '+'){
			cin>>str;
			a.insert(l, str);
		}
		else if(c == '?'){
			cin>>k;
			f = a.substr(l-1, k);
			cout<<f<<endl;
		}
	}
	
	return 0;
}
