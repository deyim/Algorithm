/*
 * =====================================================================================
 *
 *       Filename:  Anagram.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/06/2017 15:26:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <cstdio>
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int number_needed(string a, string b) {
	auto count = 0;
	vector<int> alphabet(26,0);
	for(auto c: a) alphabet[c-'a']++;
	for(auto c: b) alphabet[c-'a']--;
	for(auto val: alphabet) count += abs(val);
	return count;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}

