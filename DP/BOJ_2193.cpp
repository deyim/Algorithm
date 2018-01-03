/*
 * =====================================================================================
 *
 *       Filename:  2193.cpp
 *
 *    Description:  이친수
 *
 *        Version:  1.0
 *        Created:  08/16/2017 15:41:03
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
long long int d[105] ={} ;

int main(){
	int N;
	cin >> N;
	
	d[1] = 1;
	d[2] = 1;
	for(int i = 3; i <= N; i++){
		d[i] = d[i-1] + d[i-2];
	}

	printf("%lld\n",d[N]);
	return 0;

}
