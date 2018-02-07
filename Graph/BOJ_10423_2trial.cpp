/***
	https://www.acmicpc.net/problem/10423
	time exceed => second trial!
***/

#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <vector>
using namespace std;
typedef pair <int,int> path;
typedef	pair <int,path> costs;
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
	int rootB = find(b);
	if(rootA == rootB)
		return;
	else{
		disSet[rootB] = disSet[rootA];
	}
}

int main(){

	int n, m, k;
	int from, to, cost, plant;
	int visited = 0, finalCost=0;	
	vector<costs> v;


	cin >> n >> m >> k;

	for(int i = 0 ; i<= n ;i ++)
		disSet[i] = 0;
	
	for(int i = 0 ; i < k ; i++){
		scanf("%d", &plant);
		makeSet(plant);
	}

	for(int i = 0 ; i < m ; i++){
		scanf("%d %d %d", &from, &to, &cost);
		v.push_back(costs(cost,path(from,to)));
	}
	sort(v.begin(), v.end());

	printf("\n");
	for(int i = 0 ; i< v.size() ; i++)
		printf("%d %d %d\n", v[i].second.first, v[i].second.second, v[i].first);
	printf("\n\n");

	for(int i = 0 ; i< v.size() ; i++){
		//if src is in disjoint set and dest is not in disjoint set
		//union them
		if(disSet[v[i].second.first] != 0 && disSet[v[i].second.second] != 0 )
			continue;
		else if (disSet[v[i].second.first] == disSet[v[i].second.second])
			continue;
		//if(disSet[v[i].second.first] != 0 && disSet[v[i].second.second] == 0){
		_union(v[i].second.second, v[i].second.first);
		finalCost += v[i].first;
		printf("src %d dest %d costs  %d\n", v[i].second.first, v[i].second.second, v[i].first);
		//}
			/*
		else if(disSet[v[i].second.second] != 0 && disSet[v[i].second.first] == 0){
			_union(v[i].second.second, v[i].second.first);
			finalCost += v[i].first;
			printf("src %d dest %d costs  %d\n", v[i].second.first, v[i].second.second, v[i].first);
		
		}
		*/
		for(int j = 0 ; j <= 20 ; j++)
			printf("%d ", disSet[j]);
		printf("\n\n");
	}


	
	cout << finalCost <<endl;

}