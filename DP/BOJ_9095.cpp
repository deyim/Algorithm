/*
 * =====================================================================================
 *
 *       Filename:  9095.cpp
 *
 *    Description:  1,2,3 더하기
 *
 *        Version:  1.0
 *        Created:  08/15/2017 23:00:20
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
using namespace std;
int d[15] = {};
int sum(int N){
	if(N == 1) return 1;
	else if(N==2) return 2;
	else if(N==3) return 4;

	if(d[N] != 0) return d[N];
	
	d[N] = sum(N-1) + sum(N-2) + sum(N-3);
	return d[N];
}

int main(){
	int TC;
	int N;
	int ans;
	cin >> TC;
	d[1] = 1; d[2] = 2; d[3] = 4;
	while(TC--){
		cin >> N;
		ans = sum(N);
		printf("%d\n", d[N]);
	}

	return 0;
}
