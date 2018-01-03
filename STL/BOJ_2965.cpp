/*
 * =====================================================================================
 *
 *       Filename:  170712_2965.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/12/2017 09:23:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstdio>

int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if((b-a) > (c-b))
		printf("%d", b-a-1);
	else
		printf("%d", c-b-1);

	return 0;
			
}
