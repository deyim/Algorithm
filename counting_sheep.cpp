/*
 * =====================================================================================
 *
 *       Filename:  tmp.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/01/2017 10:16:49
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
#include <cstdio>
using namespace std;

int main(){
	int T, N, caseNum=0, F_cnt1, F_cnt2, F_cnt_same, multiply = 0, i, Nsize;
	string S;
	bool digits[10];
	cin >> T;
	while(T--){
		scanf("%d", N);
		caseNum++;

		while(1){
			N = (++multiply) * N;
			s = to_string(N);
			Nsize = s.length();

			for(i = 0 ; i < Nsize ; i++) digits[s[i]] = true;
			
			F_cnt1 = 0;
			for(i = 0 ; i < 10 ; i++){
				if(digits[i] == true) F_cnt1++;
			}

			if(F_cnt1 == 10) {
				printf("Case #%d: %d", caseNum, multiply*N);
				break;
			}
			

		}
	}
}
