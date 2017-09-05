#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
	int sizeA, sizeB;
 	scanf("%d%d", &sizeA, &sizeB);
	vector<int> vecA,vecB;
	char temp;
	for(int i=0; i<sizeA; i++){
		scanf("%c", &temp);
		vecA.push_back(temp);
	}
	for(int i=0; i<sizeB; i++){
		scanf("%c", &temp);
		vecB.push_back(temp);
	}
	
	int diff=0;
	sort(vecB.begin(), vecB.end());
	for(int i=0; i<sizeA; i++){
		if(binary_search(vecA.begin(), vecA.end(), vecA[i])){
				diff ++;
		}
	}
	printf("%d\n", sizeA + sizeB - 2*diff);
}
