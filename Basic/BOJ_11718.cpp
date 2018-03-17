#include <cstdio>
#include <iostream>
#include <string.h>

int main(){
	char str[100];
	for(int i = 0 ; i < 100 ; i++){
		getline(str);
		if(strcmp(str,"\n")) break;
		printf("%s\n", str);
	}
	return 0;
}