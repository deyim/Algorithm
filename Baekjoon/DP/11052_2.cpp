/*
 * =====================================================================================
 *
 *       Filename:  11052_2.cpp
 *
 *    Description:  붕어빵 bottom up
 *
 *        Version:  1.0
 *        Created:  08/15/2017 23:37:05
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
#include <algorithm>
using namespace std;
int d[1001] = {};
int p[1001];
int main(){
	int N;
	cin >> N;
	for(int i = 1 ; i <= N; i++){
		scanf("%d", &p[i]);
	}
	d[0] = 0;

	for(int i = 1 ; i <= N ; i++){
		d[i] = 0;
		for(int j = 1 ; j <= i ; j++){
			d[i] = max(d[i], d[i-j]+p[j]);
		}
	}
	printf("%d\n", d[N]);
}
