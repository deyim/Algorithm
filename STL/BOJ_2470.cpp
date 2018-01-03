 /* *
 *       Filename:  170712_2470.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/12/2017 09:32:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
int main(){
	
	int TC, tc;
	int temp;
	int MIN = 10000000;
	int left, right;
	int left_ans, right_ans;
	int absval;
	vector<int> Vec;

	scanf("%d", &TC);
	tc = TC;
	while(tc--){
		scanf("%d", &temp);
		Vec.push_back(temp);
	}

	sort(Vec.begin(),Vec.end());
	
	
	left = 0; right = TC-1;
	while(left<right){
		absval = abs(Vec[right] + Vec[left]);
		if(MIN > absval){
			MIN = absval;
			left_ans = left;
			right_ans = right;
		}
		else if(Vec[right] + Vec[left] < 0)
			left++;
		else
			right--;
	}

	printf("%d%d", Vec[left_ans], Vec[right_ans]);
}
