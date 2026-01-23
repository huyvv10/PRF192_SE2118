#include <stdio.h>
//List integer numbers from 0 to n.
int main(){
	int i=0, n, S=0;
	
	printf("Input n = "); scanf("%d", &n);
	
	do {
		printf("%d ", i);
		i++;
	} while (i<=n);
	
	i=0;
	printf("\n");
	do {
		printf("%d ", i);
		i+=2;
	} while (i<=n);	
	return 0;
}
