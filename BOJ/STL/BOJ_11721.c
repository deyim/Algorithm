#include <stdio.h>

int main(){
	char string[100];

	while(scanf("%10s", string)==1){
		printf("%s\n", string);
	}
	return 0;
}