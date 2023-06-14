/**
 *Problem Statement:    There are N breakfasts in the restaurant “Fat Hut” where the
    Arun works. The ith breakfast has an attractiveness Ai? and cost Ci?. Arun has
    noticed that nobody takes the jth breakfast if there exists at least one breakfast
    i such that Ai?≥Aj? and Ci?<Cj?. In other words, if a breakfast is less
    attractive and more expensive than any of the other dishes, then nobody is
    interested in that breakfast. Arun will be happy if all the N breakfasts have a
    chance to be taken. Unfortunately, Arun has no power over prices. On the other
    hand, he can change the attractiveness of some breakfasts by some real number.
    However, after the changes, the attractiveness of the ith breakfast must lie in
    the interval [Li?,Ri?]. He would also like to change the attractiveness of the
    minimum number of breakfasts. Help the Chef do it.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */

#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+1;
struct breakfast{
   int c, l, a, r;
   bool operator<(const breakfast& b){
      return c < b.c;
   }
};

int t, n;
breakfast b[N];

int main(){
   ios_base::sync_with_stdio(false);
   cout.tie(0);
   cin.tie(0);
   cin >> t;
   while(t--){
      cin >> n;
      for(int i = 0; i < n; ++i)
         cin >> b[i].a >> b[i].c >> b[i].l >> b[i].r;
      sort(b, b+n);
      vector<int> v;
      int max_l = 0;
      bool fail = false;
      for(int i = 0; i < n; ++i){
         int l, a, r;
         tie(l, a, r) = tie(b[i].l, b[i].a, b[i].r);
         if(r <= max_l){
            cout << "-1\n";
            fail = true;
            break;
         }
         while(!v.empty() && v.back() >= r)
            v.pop_back();
         if(a > max_l){
            int pos = upper_bound(v.begin(), v.end(), a) - v.begin();
            if(pos == v.size())
               v.push_back(a);
            else 
               v[pos] = a;
         }
         max_l = max(max_l, l);
      }
      if(!fail)
            cout << n - v.size() << "\n";
      }
   return 0;
}
