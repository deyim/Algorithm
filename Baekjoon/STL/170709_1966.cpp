/*
 * =====================================================================================
 *
 *       Filename:  170709_1966.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/09/2017 12:03:44
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
typedef pair<int, int> ii;

int main(){
	int tc;
	scanf("%d", &tc);

	while(tc--){
		int n,m;
		scanf("%d %d", &n, &m);
		
		int temp;
		queue<ii> q;
		priority_queue<ii> pq;
		for(int i=0; i<n; i++){
			scanf("%d", &temp);
			q.push(ii(temp,i));
			pq.push(ii(temp, i));
		}

		for(int i=1; ; i++){
			while(q.front().first < pq.top().first){
				q.push(q.front());
				q.pop();
			}
			if(q.front().second == m){
				printf("%d\n", i);
				break;
			}
			q.pop();
			pq.pop();
		}
	}
}
