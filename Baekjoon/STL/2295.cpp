/*
 * =====================================================================================
 *
 *       Filename:  2295.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/14/2017 18:55:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int num;
	//int twosum;
	cin >> num;
	int vec[1111];
	
	//int vec[num];

	for(int i = 0 ; i < num; i++){
		//scanf("%d", &vec[i]);
		cin >> vec[i];
	}
	
	sort(vec, vec+num);
	
	for(int sum = num-1; sum >= 0 ; sum--){
//		printf("%d\n",vec[sum]);
		for(int i = 0 ; i < num ; i++){
			for(int j = i  ; j < num; j++){
				int twosum = vec[i] + vec[j];
//				cout << vec[sum] << " " << vec[sum] - twosum << endl;
				if(binary_search(vec, vec+num, vec[sum] - twosum)){
					printf("%d\n", vec[sum]);
					return 0;
				}
				else if(twosum > vec[sum]) break;
			}
		}
	}

	return 0;
		
}
