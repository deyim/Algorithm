/*
 * =====================================================================================
 *
 *       Filename:  2295_2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/14/2017 19:30:46
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

int main() {
	/*
	 *  수업시간 다뤘던 binary_search 을 이용한 문제,
	 *  4중첩 for 문을 사용한다면 O(n^4) 이기때문에, O(1000000000000) 는 TLE 에 해당한다.
	 *  따라서 O(n^3 log n ) 에 해당하는 전략으로 하면 accept
	 * */
	int num ;
	cin >> num;
	int vec[1111];
	for (int i = 0 ; i<num ; i++ ) {
		cin >> vec[i]	;
	}
	sort ( vec, vec+num  ) ;
	for (int sum =num-1 ; sum>=0 ; sum-- ) {
		for (int i= 0 ;i < num ;i++ ) {
			for (int j = 0 ; j<num ; j++ ){
				int twosum = vec[i] + vec[j] ;////////
				if ( binary_search (vec,vec+num , vec[sum]-twosum)) {
					printf("%d\n",vec[sum] ) ;
					return 0  ;
				}
			}
		}
		
		
	}
	
	return 0  ;
}
