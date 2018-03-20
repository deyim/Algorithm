#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;

int main(){

	int flag=0, nflag=1;
	queue<int> q;
	int N, targ, tmp;

	cin >> N >> targ;

	for(int i = 1 ; i <= N ; i++){
		q.push(i);
	}

	cout << '<';
	for(int i = 1 ; i <= N; i++){
		for(int j = 1 ; j < targ ; j++){
			q.push(q.front());
			q.pop();
		}
		tmp = q.front();
		q.pop();
		cout << tmp ;
		if(i != N) cout << ", ";
		
	}

	cout << '>' << "\n";

	return 0;
}