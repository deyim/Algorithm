#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int main(){
	priority_queue<int> q;

	int N, op;
	cin >> N;
	while(N--){
		scanf("%d", &op);
		if(op > 0){
			q.push(-op);
		}
		else if(op==0){
			if(q.empty()){
				cout << 0 << '\n';
			}
			else{
				cout << -q.top() << '\n';
				q.pop();
			}
			//cout << (q.empty() ? 0 : -q.top()) << '\n';

		}
	}


	return 0;
}