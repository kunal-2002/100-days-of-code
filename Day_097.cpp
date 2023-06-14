/**
 *Problem Statement:    Arun has a rooted tree of N vertices rooted at vertex 1. Each
    vertex can either be coloured black or white. Initially, the vertices are coloured
    A1?,A2?,�AN?, where Ai? � {0,1} denotes the colour of the i-th vertex (here 0
    represents white and 1 represents black). He wants to perform some operations to
    change the colouring of the vertices to B1?,B2?,�BN? respectively. Arun can
    perform the following operation any number of times. In one operation, he can
    choose any subtree and either paint all its vertices white or all its vertices
    black. Help Arun find the minimum number of operations required to change the
    colouring of the vertices to B1?,B2?,�BN? respectively.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n ;
vector<int> a;
vector<int> b;
vector<vector<int>> adj;
vector<vector<int>> dp(n,vector<int>(3,-1));
int dfs(int x, int par , int d){  //d = node color has already been updated
    if(dp[x][d]!=-1) 
         return dp[x][d];
    int val = 0;
    for(auto& it: adj[x]){
        if(it==par) 
               continue;
        if(d==2){
            if(a[it]!=b[it]) 
                  val += dfs(it,x,b[it])+1;
            else 
                  val += min(dfs(it,x,b[it])+1, dfs(it,x,2));
        }
        else if(d==0){
            if(d!=b[it]) 
                  val += dfs(it,x,b[it])+1;
            else 
                  val += dfs(it,x,b[it]);
        }
        else{
            if(d!=b[it]) 
                  val += dfs(it,x,b[it])+1;
            else 
                  val += dfs(it,x,b[it]);
        }
    }
    return dp[x][d] = val;
}
void solve(){
    cin>>n;
    a.clear(); 
    a.resize(n);
    b.clear(); 
    b.resize(n);
    adj.clear(); 
    adj.resize(n);
    dp.clear(); 
    dp.resize(n,vector<int>(3,-1));
    for(int i=0;i<n;i++) 
         cin>>a[i];
    for(int i=0;i<n;i++) 
         cin>>b[i];
    for(int i=0;i<n-1;i++){
        int x,y; 
        cin>>x>>y;  
        x--; y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if(a[0]!=b[0]) 
         cout<< dfs(0,-1,b[0])+1 <<endl;
    else 
         cout<< min(dfs(0,-1,b[0])+1, dfs(0,-1,2))<<endl;
}
int main() {
    int t; 
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
