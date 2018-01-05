/***
	https://www.acmicpc.net/problem/10423
***/

#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <vector>
using namespace std;
int disSet[1001] = {1001,};

void makeSet(int a){
	disSet[a] = a;
}

int find(int a){
	if(disSet[a] == a)
		return a;
	else{
		return find(disSet[a]);
	}
}

void _union(int a, int b){
	int rootA = find(a);
	int rootB = 0;
	if(disSet[b]!= 0)
	 	rootB = find(b);
	printf("root %d %d\n", rootA, rootB);
	if(disSet[a] == disSet[b])
		return;
	else{
		disSet[b] = rootA;
	}
}

int main(){

	int n, m, k;
	int from, to, cost;
	int visited = 0, finalCost=0;
	
	cin >> n >> m >> k;
	int costs[n+1][n+1];
	int plant[k+1];
	vector<int> visitedV;
	visited = k;
	
	for(int i = 1 ; i <= k ; i++){
		scanf("%d", &plant[i]);
		makeSet(plant[i]);
		visitedV.push_back(plant[i]);
	}
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1; j <= n ; j++){
			costs[i][j] = 0;
		}
	}

	for(int i = 0 ; i < m ; i++){
		scanf("%d %d %d", &from, &to, &cost);
		costs[from][to] = cost;
		costs[to][from] = cost;
	}
	printf("\n");
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			printf("%d ", costs[i][j]);
		}
		printf("\n");
	}


	while(visited < n){
		int minEdge=100001;
		int tarPlant = 0; int tarCity = 0;

		vector<int>::iterator it;
		for(it = visitedV.begin() ; it < visitedV.end() ; it++){
			for(int i = 1 ; i <= n ; i++){
				if(costs[*it][i] && minEdge > costs[*it][i]){
					printf("i %d, costs[%d][%d]: %d\n", i, *it, i, costs[*it][i]);
					minEdge = costs[*it][i];
					tarPlant = find(*it);
					tarCity = i;
				}
			}
		}
		printf("add %d %d\n", tarPlant, tarCity);
			for(int i = 1 ; i < 10 ; i++) 
				printf("%d ",disSet[i]);
		printf("\n");
		_union(tarPlant, tarCity);
		visitedV.push_back(tarCity);
		visited++;
	}

	cout << finalCost <<endl;

}