/***
	https://www.acmicpc.net/problem/11404
***/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int from, to, cost;
	int n, bus;
	int via[101][101];
	int costs[101][101];

	cin >> n >> bus;

	for(int i = 1 ; i <= n; i++){
		for(int j = 1 ; j <= n ; j++){
			costs[i][j] = 100001;
			if(j == i) costs[i][j] = 0;
		}
	}

	for(int i = 0 ; i < bus; i ++){
		scanf("%d %d %d", &from, &to, &cost);
		//costs[from][to] = cost;
		/*************  Same source, dest, different cost  ***************/
		costs[from][to] = min(cost, costs[from][to]);
	}

	//ins't it brute force..
	for( int k = 1 ; k <= n ; k++){
		for( int i = 1 ; i <= n ; i++){
			for(int j = 1 ; j <= n ; j++){
				if(costs[i][j] > costs[i][k] + costs[k][j]){
					costs[i][j] = costs[i][k] + costs[k][j];
					via[i][j] = k;
				}
			}
		}
	}

	for(int i = 1; i <= n ; i ++){
		for(int j = 1; j <= n ; j++){
			printf("%d ", costs[i][j]);
		}
		printf("\n");
	}


}
