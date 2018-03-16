/*
type: DP
url: https://practice.geeksforgeeks.org/problems/subset-sum-problem/0
*/

#include <cstdio>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// total/2 에 해당하는 subset을 찾으면 되는거구나!! 

int isSubset(vector<int> numbers, int total, int N)
{
	printf("total:%d N:%d\n", total, N);
	if(total == 0)
		return 1;
	else if(N==0)
		return 0;

//	return isSubset(numbers, total-numbers[N], N-1) || 
//		isSubset(numbers, total, N-1);
	if(isSubset(numbers, total-numbers[N], N))
		return 1;
	if(isSubset(numbers, total, N))
		return 1;
	else
		return 0;

}

int main(){
	int T, tmp;
	cin >> T;
	
	int N;

	while(T--){
		cin >> N;
		vector<int> numbers(N);
		vector<bool> where; 
		int tmp, total=0;

		for(int i = 0 ; i < N ; i++){
			scanf("%d", &tmp);
			numbers[i] = tmp;
			total += tmp;
		}


		sort(numbers.begin(), numbers.end());

		if(isSubset(numbers, total/2, N))
			cout << "YES" << endl;
		else
			cout << "NO" << endl; 

	}
	return 0;
}

/*
2
22
858 395 29 237 235 793 818 428 143 11 928 529 776 404 443 763 613 538 606 840 904 818
15
87 56 43 91 27 65 59 36 32 51 37 28 75 7 74

NO YES

*/



