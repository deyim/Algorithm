#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	vector<int> nums;
	int N, v, cnt;
	cin >> N;
	for(int i = 0 ; i < N; i++){
		int tmp;
		scanf("%d", &tmp);
		nums.push_back(tmp);
	}

	cin >> v;

	cnt = count_if(nums.begin(), nums.end(), [&v](int x){
		return x == v;
	});

	cout << cnt << '\n';

}