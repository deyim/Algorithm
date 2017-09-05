/*
 * =====================================================================================
 *
 *       Filename:  Adlist.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/20/2017 18:39:41
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
using namespace std;

const int N = 10;
vector<int> e[N];

int main(){
	int n, m;
	scanf("%d %d", &m, &m);

	int tempa, tempb;
	for(int i = 0 ; i < m ; i ++){
		scanf("%d%d", &tempa, &tempb);
		e[tempa].push_back(tempb);
		e[tempb].push_back(tempa);
	}

	vector<int>::iterator it;
	for(int i = 0 ; i < N ; i++){
		printf("e[%d]", i);
		for(it = e[i].begin() ; it<e[i].end() ; it++)
			cout << "=>" << *it;
		cout << endl;
	}

}
