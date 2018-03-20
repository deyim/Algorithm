#include <cstdio>
#include <iostream>
#include <set>
using namespace std;

int main(){

	set<int> cards;
	set<int> targ;

	int N, M, tmp;
	cin >> N;
	for(int i = 0 ; i < N ; i++){
		scanf("%d", &tmp);
		cards.insert(tmp);
	}
	cin >> M;
	for(int i = 0 ; i < M; i++){
		scanf("%d", &tmp);
		printf("%lu ", cards.count(tmp));
	}



	return 0;
}