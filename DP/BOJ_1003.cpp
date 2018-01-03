/*
 * =====================================================================================
 *
 *       Filename:  1003.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/15/2017 19:15:54
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
int recur_1 = 0;
int recur_0 = 0;
int fibo(int find){
	if (find == 1){
		recur_1++;
		return find;
	}
	else if(find == 0){
		recur_0++;
		return find;
	}
	else
		return fibo(find-1) + fibo(find-2);
}

int main(){
	int TestCase;
	int toFind, ans;
	cin >> TestCase;
	while(TestCase--){
		scanf("%d", &toFind);
		ans = fibo(toFind);
		printf("%d %d\n", recur_0, recur_1);
		recur_1 = 0;
		recur_0 = 0;
	}

	return 0;

}
