#include <stdio.h>

int main(){
	char str[100];

	while(scanf("%[^\n]\n", str) == 1){
		printf("%s\n", str);
	}

	return 0;
}