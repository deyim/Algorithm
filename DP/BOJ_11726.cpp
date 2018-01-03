/*
 * =====================================================================================
 *
 *       Filename:  12726.cpp
 *
 *    Description:  타일 채우기
 *
 *        Version:  1.0
 *        Created:  08/15/2017 21:06:06
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
int D[1010] = {0,};

int Fill(int N){
	if(N == 1) return 1;
	if(N == 0) return 1;
	
	if(D[N] != 0) return D[N];

	D[N] =  (Fill(N-1) + Fill(N-2))%10007;
	return D[N];
}

int main(){
	int N;
	cin >> N;
	printf("%d\n", Fill(N));
}
