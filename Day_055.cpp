/**
 *Problem Statement:    Given 2 integer arrays X and Y of same size. Consider both arrays as vectors and 
 						print the sum of maximum scalar product (Dot product) of 2 vectors.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

void SpecialSort(int vec1[], int n){
	int i=0;
	sort(vec1,vec1+n,greater<int>());
	while(vec1[i]>=0){
		i++;
	}
	int start = i, end = n-1;
	while(start<end){
		swap(vec1[start],vec1[end]);
		start++;
		end--;
	}
}

int MaxScalarProd(int vec1[], int vec2[], int n){
	int max, sop=0, i1, i2;
	for(int i=0; i<n; i++){
		max = INT_MIN;
		for(int j = i; j<n; j++){
			if((vec1[i]*vec2[j]) > max){
				max = vec1[i]*vec2[j];
				i1 = i;
				i2 = j;
			}
		}
		sop = sop + max;
		swap(vec1[i],vec1[i1]);
		swap(vec2[i],vec2[i2]);
	}
	return sop;
}

int main(){
	cout<<"Enter number of test cases:\t";
	int T;
	cin>>T;
	
	while(T--){
		int n;
		cin>>n;
		int vec1[n];
		for(int i=0; i<n; i++)
			cin>>vec1[i];
		int vec2[n];
		for(int i=0; i<n; i++)
			cin>>vec2[i];
		
		SpecialSort(vec1, n);
		cout<<MaxScalarProd(vec1,vec2,n)<<endl;
	}
	return 0;
}
