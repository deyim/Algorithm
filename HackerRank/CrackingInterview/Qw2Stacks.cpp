/*
 * =====================================================================================
 *
 *       Filename:  Qw2Stacks.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/09/2017 12:46:10
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
//
//  main.cpp
//  tmp
//
//  Created by 임다은 on 09/09/2017.
//  Copyright © 2017 임다은. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

class MyQueue {
	
public:
	stack<int> new_top, old_top;
	void push(int x) {
		old_top.push(x);
	}
	
	void pop() {
		int tmp;
		if(new_top.empty()){
			while(!old_top.empty()){
				tmp = old_top.top();
				old_top.pop();
				new_top.push(tmp);
			}
		}
		new_top.pop();
	}
	
	int front() {
		int tmp;
		if(new_top.empty()){
			while(!old_top.empty()){
				tmp = old_top.top();
				old_top.pop();
				new_top.push(tmp);
			}
		}
		int top = new_top.top();
		return top;
	}
};

int main() {
	MyQueue q1;
	int q, type, x;
	cin >> q;
	
	for(int i = 0; i < q; i++) {
		cin >> type;
		if(type == 1) {
			cin >> x;
			q1.push(x);
		}
		else if(type == 2) {
			q1.pop();
		}
		else cout << q1.front() << endl;
	}
	return 0;
}

