/*
 * =====================================================================================
 *
 *       Filename:  1149.cpp
 *
 *
 *    Description:  RGB
 *
 *        Version:  1.0
 *        Created:  08/17/2017 15:39:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int a[1010][4] = {};
int d[1010][4] = {};

int main(){

	//input
	int N;
	cin >> N;

	//R = 1, G = 2, B = 3
	for(int i = 1 ; i <= N ; i++){
		for(int j = 1 ; j <= 3 ; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	//initialize firs row
	d[1][1] = a[1][1];
	d[1][2] = a[1][2];
	d[1][3] = a[1][3];

	for(int i = 2 ; i<= N;  i++){
			d[i][1] = min(d[i-1][2], d[i-1][3]) + a[i][1];
			d[i][2] = min(d[i-1][1], d[i-1][3]) + a[i][2];
			d[i][3] = min(d[i-1][2], d[i-1][1]) + a[i][3];
		//printf("%d : %d %d %d\n", i, d[i][1], d[i][2], d[i][3]);
	}

	int minValue = 1410065407;
	for(int i = 1; i<=3 ; i++){
		if(minValue > d[N][i]) minValue = d[N][i];
		//printf("min: %d\n", minValue);
	}

	cout << minValue <<endl;
}
