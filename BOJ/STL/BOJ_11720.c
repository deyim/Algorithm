#include <stdio.h>

int main(){
	int n, x;
	int total=0;
	scanf("%d", &n);

	while(n--){
		scanf("%1d", &x);
		total += x;
	}
	printf("%d", total);
	return 0;
}