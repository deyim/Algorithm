#include <cstdio>
#include <iostream>
#include <set>
using namespace std;

int main(){
	set<int> s;
	int N;

	cin >> N;
	
	for(int i = 0 ; i < N ; i++){
		int tmp;
		scanf("%d", &tmp);
		s.insert(tmp);
	}

	for(int x: s){
		cout << x << ' ';
	}

	return 0;
}