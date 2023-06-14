/**
 *Problem Statement:    There is a hallway of length N−1 and you have M
        workers to clean the floor. Each worker is responsible for
        segment [Li?,Ri?], i.e., the segment starting at Li? and ending
        at Ri?. The segments might overlap. Every unit of length of the
        floor should be cleaned by at least one worker. A worker can
        clean 1 unit of length of the floor in 1 unit of time and can
        start from any position within their segment. A worker can also
        choose to move in any direction. However, the flow of each
        worker should be continuous, i.e, they can’t skip any portion
        and jump to the next one, though they can change their direction.
        What’s the minimum amount of time required to clean the floor,
        if the workers work simultaneously?
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;

	while(T--){
              long long n,m;
              cin >> n >> m;
              vector<pair<long long, long long> > v;
              long long li, ri;
              for(int i=0; i<m; i++){
                     cin >> li >> ri;
                     v.push_back(make_pair(li,ri));
              }
              sort(v.begin(),v.end());
              long long minTime = 1;
              long long maxTime = n-1;

              long long mid;
              long long ans = -1;

              while(minTime <= maxTime){
                     mid = minTime + ((maxTime - minTime) / 2);
                     long long cur = 1, i = 0;
                     multiset<long long> e;

                     while(cur < n){
                            while(i<m && v[i].first <= cur){
                                   e.insert(v[i].second);
                                   i++;
                            }
                            while(!e.empty() && *e.begin() <= cur){
                                   e.erase(e.begin());
                            }
                            if(e.empty()){
                                   break;
                            }
                            long long x = *e.begin();
                            e.erase(e.begin());
                            cur = min(cur+mid,x);
                     }
                     if(cur == n){
                            maxTime = mid - 1;
                            ans = mid;
                     } 
                     else {
                            minTime = mid + 1;
	              }
              }
              cout << ans <<"\n";
       }
	return 0;
}
