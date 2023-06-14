/**
 *Problem Statement:    After IOI Ilya decided to make a business. He found a social
        network called "TheScorpyBook.com". It currently has N registered users.
        As in any social network two users can be friends. Ilya wants the world to
        be as connected as possible, so he wants to suggest friendship to some pairs
        of users. He will suggest user u to have a friendship with user v if they are
        not friends yet and there is a user w who is friends of both of them. Note
        that u, v and w are different users. Ilya is too busy with IPO these days,
        so he asks you to count how many friendship suggestions he has to send over
        his social network.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */

#include <bits/stdc++.h>

using namespace std;
const int maxw = 2005;

int main(){
	int N;
       cin>>N;
       string a[N];
       bitset<maxw>b, q[N];
       for(int i=0;i<N;i++)
       {
              cin>>a[i];
              for(int j=0;j<N;j++)
              {
                     q[i][j] = a[i][j] - '0';
              }
              q[i][i] = 0;
       }
       int res = 0;
       for(int i=0;i<N;i++){
              for(int j=i+1;j<N;j++){
                     b = q[i]&q[j];
                     if(q[i][j]==0 && b.count()>=1 ){
                            res+=2;
                     }
              }
       }
       cout<<res<<endl;
       getchar();
	return 0;
}
