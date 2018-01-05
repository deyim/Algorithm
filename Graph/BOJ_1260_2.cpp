/***
DFS, BFS basic
https://www.acmicpc.net/problem/1260
***/

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
vector<int> s[1001];
queue<int> q;
bool c[1001];

void DFS(int cur){
	printf("%d ", cur);
	c[cur] = true;
	for(auto x: s[cur]){
		if(c[x] == true) continue;
		c[x] = true;
		DFS(x);
	}
}

void BFS(int src){
	q.push(src);
	while(!q.empty()){
		int cur = q.front(); q.pop();
		if(c[cur] == true) continue;
		c[cur] = true;
		printf("%d ", cur);
		for( auto x: s[cur])
			q.push(x);
	}
}

int main(){
	int n,m,v;
	int from, to;
	cin >> n >> m >> v;
	while(m--){
		scanf("%d %d", &from, &to);
		s[from].push_back(to);
		s[to].push_back(from);
	}
	for(int i = 1; i<= n ; i++){
		sort(s[i].begin(), s[i].end());
	}

	DFS(v);
	printf("\n");
	memset(c, false, sizeof(c));
	BFS(v);

	return 0;

}