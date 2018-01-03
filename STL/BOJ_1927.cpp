/*
 * =====================================================================================
 *
 *       Filename:  170717_1927.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/17/2017 09:55:46
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
#include <queue>
using namespace std;

int main(){
	int TC;
	int temp;
	priority_queue<int,vector<int>,greater<int>> pq;

	cin>>TC;
	while(TC--){
		scanf("%d", &temp);
		
		if(temp == 0){
			if(pq.empty()){
				printf("0\n");
			}
			else{
				printf("%d\n", pq.top());
				pq.pop();
			}
		}
		else if(temp > 0){
			pq.push(temp);
		}

		
	}
}
