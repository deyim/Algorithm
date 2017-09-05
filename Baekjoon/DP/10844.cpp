/*
 * =====================================================================================
 *
 *       Filename:  10844.cpp
 *
 *    Description:  쉬운 계단 수
 *
 *        Version:  1.0
 *        Created:  08/16/2017 01:12:43
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
#define mod 1000000000
using namespace std;
int d[105][10] = {};

int main(){
	int N;
	cin >> N;
	for(int i = 1; i <= 9 ; i++)
		d[1][i] = 1;

	for(int i = 2; i <= N ; i++){
		for(int j = 0; j <= 9ㅈ ; j++){
			if(j-1 >= 0) d[i][j] += d[i-1][j-1];
			if(j+1 <= 9) d[i][j] += d[i-1][j+1];
			d[i][j] %= mod;
		}
	}
	int sum = 0;
	for(int i = 0; i < 10 ; i++){
		sum += d[N][i];
		sum %= mod;
	}
	printf("%d\n", sum);

	return 0;
}
