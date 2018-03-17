//DP, https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps/0

#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int T;
	cin >> T;

	while(T--){
		int N;
		cin >> N;
		int numbers[N+1], d[N+1];
		int minCost, lastStep, stop;

		for(int i = 1 ; i <= N ; i++){
			scanf("%d", &numbers[i]);
			d[i] = 0;
		}

		numbers[0] = 0; d[0] = 0; d[1] = 0;

		for(int i = 2 ; i <= N ; i++){
			minCost = 1000000;
			for(int j = 1 ; j < i ; j++){
				if(minCost > d[i-numbers[j]]){ 
					minCost = d[i-numbers[j]];
					lastStep = j;
				}
			}
			d[i] = minCost + 1;
			for(int p = 1; p <= N ;p++)
				printf("%d ", d[p]);
			cout << endl;
			if(i+numbers[i] >= N)
			{
					stop = d[i]+1;
					break;
			};

			
		}
		cout << stop << endl;
	}
}