/*
 * =====================================================================================
 *
 *       Filename:  9095_2.cpp
 *
 *    Description:  1,2,3 bottom up
 *
 *        Version:  1.0
 *        Created:  08/15/2017 23:14:30
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

int main(){
	int d[15] = {};
	int TC, N;

	d[1] = 1;
	d[2] = 2;
	d[3] = 4;

	cin>> TC;
	while(TC--){
		scanf("%d", &N);
		for(int i = 4; i<=N; i++){
			if(d[i] == 0){
				d[i] = d[i-1] + d[i-2] + d[i-3];
			}
		}
		printf("%d\n", d[N]);
	}
}
