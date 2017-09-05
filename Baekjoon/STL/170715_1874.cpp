/*
 * =====================================================================================
 *
 *       Filename:  170715_1874.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  07/15/2017 18:25:09
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */

#include <iostream>
#include <cstdio>
#include <stack>
#include <vector>
using namespace std;


int main(){
	
	bool *used;
	stack<int> st;
	int tc,TC, temp;
	bool IsYes = true;
	vector<char> answers;
	int input = 1;
	
	cin >> TC;
	tc = TC;
	used = new bool[tc];
	
	for(int j = 0; j < tc ; j++){
		scanf("%d", &temp);
		if(st.empty() || temp > st.top())
		{
			//			used[temp] = true;
			//			int start = st.empty() ? 1 : st.top()+1;
			while(input <= temp){
				st.push(input++);
				answers.push_back('+');
			}
			//answers.push_back('+');
			answers.push_back('-');
			st.pop();
		}
		else if(temp == st.top()){
			st.pop();
			answers.push_back('-');
		}
	}
	
	/*스택에서 남은거 빼는거랑 노는 불리언 체크하고 마지막에 한번만 찍어주는걸로 하자. 그리고 노가 아닌것들은 스택에 담아놓고 막판에 찍어야함! 빠잉*/
	
	//	while(st.empty()==false)
	//	{
	//		int popped = st.top();
	//		st.pop();
	//		answers.push_back('-');
	//		used[popped] = true;
	//	}
	//
	//	for(int i = 0 ; i<TC ; i++)
	//	{
	//		if(used[i+1] == false)
	//		{
	//			IsYes = false;
	//			break;
	//		}
	//	}
	
	if(!st.empty())
		IsYes = false;
	
	
	if(IsYes == true){
		for(vector<char>::iterator it = answers.begin(); it<answers.end();it++)
			printf("%c\n", *it);
	}
	else{
		printf("NO");
	}
	
	return 0;
}











