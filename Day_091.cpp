/**
 *Problem Statement:    Sridhar was a seasoned traveler. He liked to visit new places. More than all he was a 
 		meticulous planner. This time he was planning to visit Europe. He wrote down his travel itinerary like as 
		follows:If he wanted to visit Madrid, Paris, Munich, Warsaw and Kiev in this order, he would write it down 
		like as:Madrid Paris 100, Paris Munich 200, Munich Warsaw 150, Warsaw Kiev 120 More formally, if he wanted to 
		go from A to B directly and the price is C dollars, then he would write A B C on a card. Each move was 
		written on a different card. Sridhar was a great planner, so he would never visit the same place twice. 
		Just before starting his journey, the cards got shuffled. Help Sridhar figure out the actual order of the 
		cards and the total cost of his journey.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter number of test cases:\t";
	int T, n;
	cin>>T;
	
	while(T--){
		cin>>n;
		map<string,pair<string, string>>p;
		string s1, s2, s3, s4;
		set<string>s;
		int x, cost = 0;
		for(int i=1; i<n; i++){
			cin>>s1>>s2>>s3;
			x = stoi(s3.substr(0,s3.length()-1));
			p[s1] = {s2, s3};
			cost += x;
			if(s.find(s1) == s.end())
				s.insert(s1);
			else
				s.erase(s1);
			if(s.find(s2) == s.end())
				s.insert(s2);
			else
				s.erase(s2);
		}
		s3 = ((p.find(*s.begin()) != p.end()) ? *s.begin() : *s.rbegin());
		while (p.find(s3) != p.end()){
		 	cout << s3 << " " << p[s3].first << " " << p[s3].second << "\n";
		 	s3 = p[s3].first;
		}
		cout << cost << "$\n";
	}
	return 0;
}
