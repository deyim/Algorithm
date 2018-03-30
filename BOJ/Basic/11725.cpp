#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#define MAX 100005
using namespace std;

int main(){
	int N;
	cin >> N;
	int tree[N][3]={0,};
	bool check[N]={false,};
	int parent[N] = {0,}
	int position[N+1]={0,};
	int head=1, child, cnt=1;
	queue<int> q;
	
	for(int i = 0; i < N ; i++){
		int x, y;
		cin >> x >> y;
		tree[x].push_back(y);
		tree[y].push_back(x);
	}

	while(cnt < N){
		for(int i = 0 ; i < 3 ; i++){
			child = tree[head][i];
			if(child != 0){
				q.push(child);
				check[child] = true;
				parent[child] = head;
				cnt++;
			}
		}
		head = q.pop();

	}

}