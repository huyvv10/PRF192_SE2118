#include <stdio.h>

int main(){
	int i, n, S=0;
	printf("Input n = "); scanf("%d", &n);
	for (i=0; i<=n; i++)
		S += i; 			//S = S + i;
	printf("Total: %d\n", S);	
	
	S=0;					//Reset S to zero
	for (i=0; i<=n; i++){
		printf("%d + ", i);		
		S += i; 			//S = S + i;
	}
	printf("\b\b= %d\n", S);	

	S=0;					//Reset S to zero
	for (i=1; i<=n; i+=2){
		printf("%d + ", i);		
		S += i; 			//S = S + i;
	}
	printf("\b\b= %d\n", S);
	
	S=0;					//Reset S to zero
	for (i=0; i<=n; i+=2){
		printf("%d + ", i);		
		S += i; 			//S = S + i;
	}
	printf("\b\b= %d\n", S);
		
	S=0;
	for (i=0; i<=n; i++){
		printf("%d ", i);		
		S += i; 			//S = S + i;
	}
	printf("%d\n", S);
	return 0;
}
