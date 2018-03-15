/*
TYpe: DP
URL: https://practice.geeksforgeeks.org/problems/cutted-segments/0
*/
#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;

int min(int x, int y, int z){
	return min(min(x,y),z);
}

int max(int x, int y, int z){
	return max(max(x,y),z);
}

int main(){

	int T;
	cin >> T;

	while(T--){
		int N,x,y,z;
		int xp=0, yp=0, zp=0;
		int minNum;
		bool flag;
		cin >> N >> x >> y >> z;
		int d[N+1];

		memset(d, 0, sizeof(int)*(N+1));
		d[x] = 1; d[y] = 1; d[z] = 1; 
		minNum = min(x,y,z);

		for(int i = minNum+1 ; i <= N ; i++){
			if(i-x >= 0) xp = d[i-x];
			if(i-y >= 0) yp = d[i-y];
			if(i-z >= 0) zp = d[i-z];

			if(xp != 0 || yp != 0 || zp != 0)
				d[i] = max(xp,yp,zp)+1;
			else if(d[i] == 0)
				d[i] = 0;

			if( i == 100){
				printf("%d %d %d\n", xp, yp, zp);
			}
/*
			printf("%dth ", i);
			for(int j = 0 ; j <= N ; j++){
				printf(" %d ", d[j]);
			}
			cout << endl;
*/
		}



		cout << d[N] << endl;

	}

	return 0;
}