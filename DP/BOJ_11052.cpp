/*
 * =====================================================================================
 *
 *       Filename:  11052.cpp
 *
 *    Description:  붕어빵 판매하기
 *
 *        Version:  1.0
 *        Created:  08/15/2017 23:27:39
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
int d[1005]={};
int p[1005];


int selling(int N){
	if(N == 0 ) return 0;
	if(d[N] != 0) return d[N];


	for(int i = 1 ; i <= N; i++){
		d[N] = max(d[N], selling(N-i)+p[i]);
	}	
	
	return d[N];

}

int main(){
	int N;
	cin >> N;
	for(int i = 1 ; i <= N ; i++)
		scanf("%d", &p[i]);
	
	printf("%d\n", selling(N));
}

