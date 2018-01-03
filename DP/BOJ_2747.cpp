/*
 * =====================================================================================
 *
 *       Filename:  2747.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/15/2017 19:48:47
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
int fib_array[10000] = {};
int fibo(int find){
	if(find <= 1 ) return find;
	else if(fib_array[find] != 0 ) return fib_array[find];
	else
		return fib_array[find] = fibo(find-1) + fibo(find-2);

}

int main(){
	
	int find;
	cin >> find;
	printf("%d\n", fibo(find));

}

