#include <cstdio>
#include <iostream>
#include <set>
#include <string.h>
using namespace std;

int main(){

	int cards[20000005]={0};
	int N, M, tmp;
	cin >> N;

	for(int i = 0 ; i < N ; i++){
		scanf("%d", &tmp);
		cards[tmp+10000000]++;
	}

	cin >> M;
	for(int i = 0 ; i< M; i++){
		scanf("%d", &tmp);
		printf("%d ", cards[tmp+10000000]);
	}

	// multiset<int> cards;
	// int N, M, tmp;

	// cin >> N;
	// for(int i = 0 ; i < N ; i++){
	// 	scanf("%d", &tmp);
	// 	cards.insert(tmp);
	// }

	// cin >> M;
	// for(int i = 0 ; i < M; i++){
	// 	scanf("%d", &tmp);
	// 	printf("%lu ", cards.count(tmp));
	// }
	printf("\n");
	return 0;
}