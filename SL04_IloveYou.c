#include <stdio.h>

int main(){
	int i, n;
	printf("Input n = "); scanf("%d", &n);
	
	for (i=0; i<n; i++){
		printf("%d. I love you!", i+1);
		printf("\n");
	}
	
	return 0;
}
