/**
 *Problem Statement:    Given an undirected graph and an integer M. The task is to determine if the graph can be 
 		colored with at most M colors such that no two adjacent vertices of the graph are colored with the same 
		color. Here coloring of a graph means the assignment of colors to all vertices. Print 1 if it is possible to 
		colour vertices and 0 otherwise.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		
		ll n, m, e;
		cin>>n>>m>>e;
		vector<int>adj[n];
		
		for(int i=0;i<e;i++){
			int a,b;
			cin>>a>>b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		vector<int>vis(n,0);
		vector<int>color(n,1);
		int maxicolor = 1;
		for(int i=0; i<n; i++){
			if(!vis[i]){
				vis[i] = 1;
				queue<int> q;
				q.push(i);
				while(!q.empty()){
					int front = q.front();
					q.pop();
					for(auto it:adj[front]){
						if(color[it] == color[front]){
							color[it]++;
							maxicolor = max(maxicolor, color[it]);
						}
						if(!vis[it]){
							q.push(it);
							vis[it] = 1;
						}
					}
				}
			}
		}
		if(maxicolor<=m)
			cout<<1<<"\n";
		else
			cout<<0<<"\n";
	}
	return 0;
}
