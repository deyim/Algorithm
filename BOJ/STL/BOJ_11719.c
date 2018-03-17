#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

int main(){
	char c;
	//while((c = getchar()) && c != EOF)
	
	char *str, line[100];

	while((str = fgets(line,MAX_LEN,stdin)) != NULL){
		//if(str[0] == EOF) break;
		printf("%s", str);
	}

	char c;
    while ((c = getchar()) && c != EOF) {
        printf("%c",c);
    }
	
	return 0;
}