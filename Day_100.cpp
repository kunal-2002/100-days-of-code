/**
 *Problem Statement:    You have prepared four problems. The difficulty
        levels of the problems are A1?,A2?,A3?,A4? respectively. A
        problem set comprises at least two problems and no two problems
        in a problem set should have the same difficulty level. A
        problem can belong to at most one problem set. Find the maximum
        number of problem sets you can create using the four problems.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	int count=0;
	int counter=1;
	vector<int>array(4);
	while(T--){
		count=1;
	    // getting an array
	    for(int j=0;j<4;j++){
	        cin>>array[j];
	    }
	    // sorting an arrray
	    sort(array.begin(),array.end());
	    // counting the maximum possible count
	    for(int j=0;j<4;j++){
	        for(int l=j+1;l<4;l++){
	            if(array[j]==array[l]){
	                counter++;
	                
	            }
	            else{
	                count=max(counter,count);
	                counter=1;
	                break;
	            }
	            if(l==3){
	                count=max(counter,count);
	                counter=1;
	            }
	        }
	    }
	    if(count==3){
	        cout<<1<<endl;
	    }
	    else if(count==2){
	        cout<<2<<endl;
	    }
        else if(count==1){
            cout<<2<<endl;
        }
	    else if(count==4){
	        cout<<0<<endl;
	    }
	}
	return 0;
}
