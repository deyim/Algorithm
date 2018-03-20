#include <cstdio>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
typedef pair<int, int> pa;

int main(){
	vector<int> seq;
	list<pa> li;
	int n, tmp, dist, move;
	cin >> n;

	for(int i = 1 ; i <= n ;i++){
		cin >> tmp;
		li.push_back({i,tmp});
	}

	auto it = li.begin();
	for(int i = 0 ; i < n-1 ; i++){
		move = it->second;
		//seq.push_back(it->first);a
		cout << it->first << ' ';

		if(move>0){
			auto temp = it;
			temp++;
			if(temp == li.end()){
				temp = li.begin();
			}
			li.erase(it);
			it = temp;
			//li.erase(it); it++;
			for(int i = 1 ; i < move ; i++){
				it++;
				if(it == li.end())
					it = li.begin();
			}
		}

		else if(move < 0){
			auto temp = it;			
			if(temp == li.begin()){
				temp = li.end();
			}
			temp--;
			li.erase(it);
			it = temp;
			for(int i = -1 ; i > move ; i--){
				if(it == li.begin()){
					it = li.end();
				}
				it--;
			}
		}
		
	}
	cout << li.front().first << '\n';

	return 0;
}