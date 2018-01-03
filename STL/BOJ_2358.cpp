/*
 * =====================================================================================
 *
 *       Filename:  170717_2358.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/17/2017 10:18:43
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
#include <set>
using namespace std;
int main(){
		
	vector<int> xVec, yVec;
	set<int> xCnt;
	set<int> yCnt;
	int tc;
	int tempx, tempy;
	
	cin>>tc;
	while(tc--){
		scanf("%d%d", &tempx, &tempy);
		xVec.push_back(tempx);
		yVec.push_back(tempy);
	}

	sort(xVec.begin(), xVec.end());
	sort(yVec.begin(), yVec.end());
	for(int i = 0 ; i < xVec.size()-1; i++){
		if(xVec[i] == xVec[i+1])
			xCnt.insert(xVec[i]);
	}
	
	for(int i = 0 ; i < yVec.size()-1; i++){
		if(yVec[i] == yVec[i+1])
			yCnt.insert(yVec[i]);
	}
	cout << xCnt.size() + yCnt.size() <<endl;
}
