/*
 * =====================================================================================
 *
 *       Filename:  1251.cpp
 *
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/14/2017 16:56:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	string word;
	cin >> word;
	int curIdx = 0, wordsize = word.size();
	string minword="zzzzzzzzzzzzzzzzzzzzzzzzzzzz";
	string cur;
	for(int i = 1; i < wordsize-1; i++){
		for(int j = i+1 ; j < wordsize ; j++){
			for(int k = i-1; k >=0 ; k--)
				cur += word[k];
			for(int k = j-1; k >= i; k--)
				cur += word[k];
			for(int k = wordsize-1 ; k >= j; k-- )
				cur += word[k];
			if(cur.compare(minword)<0) minword = cur;
//			cout << i << j << cur<<endl;
			cur = "";
			
		}
	}

	
	cout << minword << endl;
	return 0;
}
