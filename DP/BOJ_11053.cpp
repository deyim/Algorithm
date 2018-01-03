/*
 * =====================================================================================
 *
 *       Filename:  11053.cpp
 *
 *    Description:  LIS
 *
 *        Version:  1.0
 *        Created:  08/17/2017 18:08:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int N;
	cin >> N;
	int d[N], a[N];
	int longest = 0;


	for(int i = 0;  i < N; i++){
		scanf("%d", &a[i]);
	}


	for(int i = N-1; i>=0 ; i--){
		d[i] = 1;
		for(int j = i+1 ; j < N; j++){
			if(a[i] < a[j])
				d[i] = max(d[i], d[j] + 1);
		}
		//printf("%d %d\n", i, d[i]);
	}

	int ans = 0;
	for(int i = 0 ; i < N ; i++) ans = max(ans, d[i]);
	cout << ans << endl;

}
