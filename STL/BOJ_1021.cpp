/*
 * =====================================================================================
 *
 *       Filename:  170716_1021.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  07/16/2017 17:05:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>
//#include <deque>
#include <queue>
#include <list>
using namespace std;
list<int> numbers;

bool isLeftBeterThanRight(int targ){
	int idx=0;
	for(list<int>::iterator iter = numbers.begin(); iter != numbers.end(); iter++)
	{
		idx++;
		if(*iter == targ) break;
	}
	if(idx <= numbers.size()/2+1)
		return true;
	else
		return false;
}

int main(){
	int n, m;
	queue<int> vec;
	
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++) numbers.push_back(i);
	for(int i = 0; i < m; i++){
		int temp;
		scanf("%d", &temp);
		vec.push(temp);
		
	}
	
	int cnt = 0;
	while(!vec.empty()){
		if(vec.front() == numbers.front()){
			numbers.pop_front();
			vec.pop();
		}
		else{
			if(isLeftBeterThanRight(vec.front()))
			{
				//left better
				while(vec.front() != numbers.front()){
					numbers.push_back(numbers.front());
					numbers.pop_front();
					cnt++;
				}
			}
			else
			{
				//right better
				while(vec.front() != numbers.front()){
					
					numbers.push_front(numbers.back());
					numbers.pop_back();
					cnt++;
				}
			}
		}
	}
	
	cout << cnt << endl;
	return 0;
	
}
