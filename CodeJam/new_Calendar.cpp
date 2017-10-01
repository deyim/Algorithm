#include <stdlib.h>
#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int T, M, D, W;
	int TC = 0, line=0, last=0, firstEmpty=0;
	cin >> T;
	while(T--){
		TC++;
		scanf("%d %d %d", &M, &D, &W);
		//printf("MDW: %d %d %d\n", M, D, W);
		line = 0; last = 0; firstEmpty = 0;
		while(M--){
			if(last)firstEmpty = W - last;
			//printf("first: %d\n", firstEmpty);
			if(firstEmpty) line += ceil(double(D+firstEmpty)/W);
			else line+= ceil(double(D)/W);
			//printf("line: %d\n", line);
			last = W - ((D+firstEmpty)%W);
			//printf("last: %d\n\n", last);
		}
		printf("Case #%d: %d\n", TC, line);
	}
}
