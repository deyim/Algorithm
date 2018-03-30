#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int N;	

	cin >> N;
	vector<pair<int,int>> points(N);
	for(int i = 0 ; i < N ; i++){
		scanf("%d %d", &points[i].first, &points[i].second);
	}

	sort(points.begin(), points.end());

	for (int i=0; i<points.size(); i++) {
    	printf("%d %d\n",points[i].first, points[i].second);
	}

}