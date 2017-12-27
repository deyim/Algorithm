/*
 * =====================================================================================
 *
 *       Filename:  Sherlock_Cost.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/02/2017 09:23:59
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max(int a,int b){
    if (a>b) return a;
    else return b;
}
int main() {
    int T, N;
    int B[100000];
    int Sum=0;
    int abs1, absMax, abs1n, absMn;
    int tmp, maxS=0;
    cin >> T;
    while(T--){
        tmp = scanf("%d", &N);
        for(int i = 0 ; i < N;i++) tmp = scanf("%d", &B[i]);
        abs1n = 0; absMn = 0; abs1 = 0; absMax = 0;
        for(int i = 1; i < N; i++){
            abs1n = max(absMax + abs(1-B[i-1]), abs1);
            absMn = max(absMax+abs(B[i]-B[i-1]), abs1 + abs(B[i]-1));
            
            abs1 = abs1n; absMax = absMn;
        }
        maxS = max(abs1n, absMn);
        printf("%d\n", maxS);        
    }
    
    return 0;
}

