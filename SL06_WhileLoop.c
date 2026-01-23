#include <stdio.h>
//List from 0 to n using while loop
int main(){
	int i=0, n, S=0;
	
	printf("Input n = "); scanf("%d", &n);
	while (i<=n){
		S+=i;			//S = S + i;
		printf("%d ", i);
		i++;
	}
	printf("\nTotal: %d", S);
	
	return 0;
}
