/*
 * =====================================================================================
 *
 *       Filename:  Adlist.cpp
 *
 *    Description: DFS, BFS basic 
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
#include <queue>
#include <algorithm>
using namespace std;

const int N = 1005;
vector<int> e[N];
vector<int> DFSroute;
vector<int> BFSroute;
int DFSvisit[1005] = {};
int BFSvisit[1005] = {};

void bfs(int start){
	queue<int> q;
	q.push(start);
	BFSroute.push_back(start);
	BFSvisit[start] = 1;

	while(!q.empty()){
		int cur = q.front(); q.pop();
		
		vector<int>::iterator it;
		for(it = e[cur].begin(); it < e[cur].end() ; it++){
			int next = *it;
			if(!BFSvisit[next]){
				BFSvisit[*it] = 1;
				BFSroute.push_back(*it);
				q.push(next);
			}
		}
	}
}

void dfs(int cur){
	DFSvisit[cur] = 1;
	DFSroute.push_back(cur);

	vector<int>::iterator it;
	for(it = e[cur].begin() ; it < e[cur].end() ; it++ ){
		int next = *it;
		if(!DFSvisit[next]) dfs(next);
	}
}

int main(){
	int n, m, s;
	scanf("%d%d%d", &n, &m, &s);

	int tempa, tempb;
	for(int i = 0 ; i < m ; i ++){
		scanf("%d%d", &tempa, &tempb);
		e[tempa].push_back(tempb);
		e[tempb].push_back(tempa);
	}

	for(int i = 0 ; i < n ; i++){
		sort(e[i].begin(), e[i].end());
	}
	
	dfs(s);
	bfs(s);

	vector<int>::iterator it;
	for(it = DFSroute.begin() ; it<DFSroute.end() ; it++)
		printf("%d ", *it);
	cout << endl;
	
	for(it = BFSroute.begin() ; it<BFSroute.end() ; it++)
		printf("%d ", *it);
	
}
