/*
 * =====================================================================================
 *
 *       Filename:  11057.cpp
 *
 *    Description:  오르막수
 *
 *        Version:  1.0
 *        Created:  08/16/2017 15:28:47
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
int d[1010][12]={};

int main(){
	int N;
	cin >> N;

	for(int i = 0; i < 10; i++){
		d[1][i] = 1;
	}

	for(int j = 2; j <= N; j++){
		for(int r = 0; r <= 10; r++){
			for(int k = 0; k<=r; k++){
				d[j][r] += (d[j-1][k] % 10007);
			}
		}
	}

	int ans = 0;
	for(int i = 0; i < 10 ; i++) ans +=  d[N][i];
	ans %= 10007;
	printf("%d\n", ans);

}
