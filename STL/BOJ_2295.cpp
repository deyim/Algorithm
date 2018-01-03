/*
 * =====================================================================================
 *
 *       Filename:  170708_2295.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/08/2017 18:37:58
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
	int a[1001];
	int size;
	int Imax = -1000000;
	
	scanf("%d", &size);
	for(int i=0; i<size; i++){
		cin >> a[i];
	}
	
	sort(a, a+size);

	for(int i=size-1 ; i>=0 ; i--){
		for(int j=0; j<size; j++){
			for(int k=j; k<size; k++){
				int sum = a[j] + a[k];
				if( binary_search(a, a+size, a[i]-sum)){
					printf("%d", a[i]);
					return 0;
				}
			}
		}
	}
	
}
