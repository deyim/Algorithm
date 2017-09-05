/*
 * =====================================================================================
 *
 *       Filename:  10808.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/14/2017 15:45:25
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
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
	int alpha[30] = {};
	string word;
	cin >> word;

	for(int i = 0 ; i < word.size(); i ++)
		alpha[word[i] - 'a' ] ++;

	for( int i = 0 ; i < 26 ; i++)
		printf("%d ", alpha[i]);
	
	printf("\n");
	return 0;
}
