//
//  main.cpp
//  170707
//
//  Created by 임다은 on 07/07/2017.
//  Copyright © 2017 임다은. All rights reserved.
//
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(int argc, const char * argv[]) {
	
	int TC;
	cin >> TC;
	map<string, int> mp;
	
	while(TC--){
		int SchoolNum;
		cin >> SchoolNum;
		mp.clear();
		while(SchoolNum--){
			int consume;
			string school;
			cin >> school;
			scanf("%d", &consume);
			mp[school] += consume;
		}
		
		int TCmaxnum = -10000;
		string TCmaxschool;
		for( auto it:mp){
			if(it.second > TCmaxnum){
				TCmaxnum = it.second;
				TCmaxschool = it.first;
			}
		}
		
  cout << TCmaxschool << endl;
	}
	
	return 0;
}
