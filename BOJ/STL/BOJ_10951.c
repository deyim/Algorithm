#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	while(1){
		if(scanf("%d %d", &a, &b)==2){
			printf("%d\n", a+b);
		}
		else
			break;
	}
	return 0;
}