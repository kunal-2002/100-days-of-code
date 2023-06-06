/**
 *Problem Statement:    You are given an undirected graph with N nodes (numbered 1 through N) and M edges. 
 		Each edge connects two distinct nodes. However, there may be multiple edges connecting the same pairs of 
		nodes, and they are considered to be distinct edges. A lowercase English letter is written in each node.
		You are also given a string S with length L. A beautiful path is a sequence of L-1 edges such that there 
		is a sequence of L nodes with the following properties:for each valid i, the i-th edge connects the i-th and 
		(i+1)-th of these nodes for each valid i, the i-th character of S is written in the i-th of these nodes. 
		There are no other restrictions — a path may visit nodes or edges any number of times in any order.
		Determine the number of beautiful paths in the graph. Since the answer can be very large, compute it 
		modulo (10^9)+7.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll mod = 1000000007LL;
ll powr(ll b, ll p, ll md){
	if(b==0)
		return 0;
	if(p==0)
		return 1;
	ll x = powr(b, p/2, md);
	x = (x*x)%md;
	if(p&1)
		x = (x*b)%md;
	return x;
}

vector<ll> g[1010][30];
ll n, m, l;
string s, ss;
ll dp[1010][1010];

ll dfs(ll pos, ll rt, ll par)
{
    if(pos>=l) return 1;
    ll &x=dp[pos][rt];
    if(x!=-1) return x;
    x=0;
    for(auto it:g[rt][s[pos]-'a'])
    {
        x=(x+dfs(pos+1, it, rt))%mod;
    }
    return x;
}

ll pal()
{
    ll l=0;
    ll r=s.size()-1;
    while(l<r)
    {
        if(s[l]!=s[r]) return 0;
        l++;
        r--;
    }
    return 1;
}

ll fc()
{
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!=s[0]) return 0;
    }
    return 1;
}

// ll powr(ll b,ll p, ll md)
// {
//     if(p==0) return 1;
//     ll x=powr(b, p/2, md);
//     x=(x*x)%md;
//     if(p&1) x=(x*b)%md;
//     return x;
// }

void solve()
{
    cin>>n>>m>>l;
    cin>>s>>ss;
    // cout<<s<<endl;
    memset(dp, -1, sizeof(dp));
    vector<ll> a(m), b(m);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<30;j++)
        {
            g[i][j].clear();
        }
    }
    for(int i=0;i<m;i++)
    {
        g[a[i]][ss[b[i]-1]-'a'].push_back(b[i]);
        g[b[i]][ss[a[i]-1]-'a'].push_back(a[i]);
    }
    // cout<<g[1][0].size()<<endl;
    ll ct=0;
    for(int i=1;i<=n;i++)
    {
        if(ss[i-1]==s[0])
        {
            ct=(ct+dfs(1, i, i))%mod;
        }
    }

    if(fc())
    {
        ll xx=0;
        ll tm[n+1][n+1];
        memset(tm, 0, sizeof(tm));
        for(int i=0;i<m;i++)
        {
            if(ss[a[i]-1]==s[0] and ss[b[i]-1]==s[0])
            {
                tm[a[i]][b[i]]++;
                tm[b[i]][a[i]]++;
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                xx=(xx+powr(tm[i][j], l-1, mod))%mod;
            }
        }
        // cout<<xx<<endl;
        ct=((ct-xx+mod)%mod+mod)%mod;
    }

    cout<<ct<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        solve();
    }
    return 0;
}
