#include <stdio.h>

int main(){
	int i, n;
	printf("Input n = "); scanf("%d", &n);
	for (i=1; i<=10; i++)
		printf("%d x %d = %d\n", n, i, i*n);
		
	printf("\n");
	int j;
	for (i=1; i<=10; i++){
		for (j=2; j<=9; j++)
			printf("%d x %d = %d\t", j, i, i*j);
		printf("\n");	
	}
	
	for (i=0; i<n; i++){
		for (j=0; j<n; j++)
			if (i==j || j==0 || j==n-1)
				printf("*");
			else
				printf(" ");
		printf("\n");			
	}	
	return 0;
}
