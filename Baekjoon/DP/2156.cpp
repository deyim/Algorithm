/*
 * =====================================================================================
 *
 *       Filename:  2156.cpp
 *
 *    Description:  포도주시식
 *
 *        Version:  1.0
 *        Created:  08/16/2017 16:20:58
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
int d[10010] = {};
int p[10010] = {};

int max3(int a, int b, int c){
	int maxval;
	maxval = max(a,b);

	if(maxval == a)
		maxval = max(a,c);
	else
		maxval = max(b,c);

	return maxval;
}

int main(){
	int N;
	cin >> N;

	for(int i = 1; i <= N; i++) scanf("%d", &p[i]);

	//초기화
	d[0] = 0;
	d[1] = p[1];
	d[2] = p[1] + p[2];

	for(int i = 3 ; i<=N; i++){
		d[i] = max3(d[i-1], d[i-2] + p[i], d[i-3] + +p[i]+ p[i-1]);
		//printf("%d: %d\n", i, d[i]);
	}

	printf("%d\n", d[N]);
	return 0;
}
