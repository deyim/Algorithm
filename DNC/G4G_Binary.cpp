/*
 * =====================================================================================
 *
 *       Filename:  Binary.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/07/2017 23:54:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;
int main(){
	//code
	int TC;
	cin >> TC;
	int N,M,G,S;
	int Gsum = 0 ; int Ssum = 0;
	int low = 1; int high, mid; int cnt = 0;
	while(TC--){
	    scanf("%d%d%d%d", &N, &M, &G, &S);
	    Gsum = G*M;
	    high = N;
	    while(mid != M){
	        mid = (high+low)/2; cnt++;
	        if(mid < M){
	            low = mid+1;
	        }
	        else{
	            high = mid;
	        }
			  //printf("low %d mid %d high %d \n", low, mid, high);
			  if(mid == M) break;
	    }
	    Ssum = S * cnt;
		 //printf("Gsum %d Ssum %d \n", Gsum, Ssum);
	    if(Gsum < Ssum) printf("1\n");
	    else if(Gsum > Ssum) printf("2\n");
	    else printf("0\n");
	   
		 low = 1; high = 0; mid = -10;
	    Gsum = 0; Ssum = 0; cnt = 0;
	}
	
	return 0;
}
