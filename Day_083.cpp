/**
 *Problem Statement:    Given a complete binary tree with the height of H, we index the nodes respectively top-down 
 		and left-right from 1. The i-th node stores a positive integer Vi. Define Pi as follows: Pi=Vi if the i-th 
		node is a leaf, otherwise Pi=max(Vi*PL, Vi*PR), where L and R are the indices of the left and right children 
		of i, respectively. Your task is to caculate the value of P1.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>
using namespace std;

#define G 1000000007

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<char> vc;
typedef pair<int,int> pii;
typedef vector<pii> vii;

int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t=1;// cin >> t;
    while (t){
        int h; cin >> h;
        if (h==0) break;
        
        int n = pow(2,h)-1;
        vector<double> a(n+1);
        vector<ll> b(n+1);
        for (int i=1; i<=n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        
        for (int j=h-2; j>=0; j--){
            for (int i=pow(2,j); i<pow(2,j+1); i++){
                a[i] = (a[i] * ((a[2*i]>a[2*i+1])? a[2*i]:a[2*i+1]));
                b[i] = (b[i] * ((a[2*i]>a[2*i+1])? b[2*i]:b[2*i+1]))%G;
            }
        }
        cout << b[1] << endl;
    }
	return 0;
}
