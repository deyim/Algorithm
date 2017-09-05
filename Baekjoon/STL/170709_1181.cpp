/*
 * =====================================================================================
 *
 *       Filename:  170709_1181.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/09/2017 12:49:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <set>
using namespace std;

bool cmp(string s1, string s2)
{
	if(s1.length() == s2.length()){
		return s1< s2; // 사전 순서대로 정렬
	}
	return s1.length() < s2.length();
}


int main(){
	int tc;
	scanf("%d", &tc);

	set<string> wordSet;
	vector<string> v;
	string temp;

	while(tc--){
		
			cin >> temp;
			if(wordSet.find(temp) != wordSet.end()){
				continue;
			}
			wordSet.insert(temp);
			v.push_back(temp);
	
	}


	sort(v.begin(), v.end(), cmp);
	
	for(int i=0; i<v.size() ; i++){
		printf("%s\n", v[i].c_str());
	}
}
