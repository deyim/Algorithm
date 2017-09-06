#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
	char* a = (char *)malloc(512000 * sizeof(char));
	scanf("%s",a);
	char* b = (char *)malloc(512000 * sizeof(char));
	scanf("%s",b);
    
    int* aVisit, *bVisit;
	int alen, blen;
    int alphabet[30] = {0};
	alen = (int)strlen(a); blen=(int)strlen(b);
	
    for(int i = 0 ; i < alen ; i++) alphabet[a[i]-'a']++;
    for(int i = 0 ; i < blen ; i++) alphabet[b[i]-'a']--;
    
    int count = 0;
    for(int i = 0; i < 30 ; i++) {
		//printf("%d ", alphabet[i]);
	 	count += abs(alphabet[i]);
	 }
	//printf("\n");
	
	printf("%d", count);
	//printf("\n");
	return 0;
}


