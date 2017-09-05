/*
 * =====================================================================================
 *
 *       Filename:  9251.cpp
 *
 *    Description:  LCS
 *
 *        Version:  1.0
 *        Created:  08/17/2017 17:21:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(){

	int a[1010][1010] = {};
	string s1, s2;
	cin >> s1 >> s2;

	int lenS1, lenS2;
	lenS1 = s1.length();
	lenS2 = s2.length();


	
	//initialize
	for(int i = 0 ; i < lenS1 ; i++) a[0][i] = 0;
	for(int j = 0 ; j < lenS2 ; j++) a[j][0] = 0;

	s1 = " " + s1;
	s2 = " " + s2;
	//dp bottom up
	for(int i = 1 ; i <= lenS1 ; i++){
		for(int j = 1 ; j <= lenS2 ; j++){
			if(s1[i] == s2[j]) 
				a[i][j] = a[i-1][j-1] + 1;
			else
				a[i][j] = max(a[i-1][j], a[i][j-1]);
	//		printf("%d", a[i][j]);
		}
	//	printf("\n");
	}

	cout << a[lenS1][lenS2];

}
