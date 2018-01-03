/*
 * =====================================================================================
 *
 *       Filename:  170719_2230.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/20/2017 00:39:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	int temp;
	vector<int> v;
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &temp);
		v.push_back(temp);
	}

	sort(v.begin(), v.end());
	int minest = 1000000000;
	for(int i = 0 ; i < n; i++){
		auto it = lower_bound(v.begin()+i, v.end(), m+v[i]);
		if(it == v.end()) continue;
		minest = min(minest, *it-v[i]);
	}
	
	cout << minest << endl ;
}

