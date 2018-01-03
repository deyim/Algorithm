/*
 * =====================================================================================
 *
 *       Filename:  1932.cpp
 *
 *    Description: triangle 
 *
 *        Version:  1.0
 *        Created:  08/15/2017 19:23:45
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
int a[510][510] = {};
int d[510][510] = {};

int main(){

	int N;
	cin >> N;
	for(int i = 1; i<= N; i++){
		for(int j = 1; j<= i ; j++){
			scanf("%d", &a[i][j]);
		}
	}

	d[1][1] = a[1][1];
	
	for(int i = 2; i <= N; i++){
		for(int j = 1; j <= i; j++){
			d[i][j] = max(d[i-1][j-1], d[i-1][j]) + a[i][j];
			//printf("d[%d][%d] is %d\n", i, j, d[i][j]);
		}
	}

	int maxval = 0;
	for(int i = 1; i <= N; i++)
		maxval = max(d[N][i], maxval);

	cout << maxval << endl;
}
