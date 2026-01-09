#include <stdio.h>

int main(){
	char c1;
	int n;
	float vF;
	double db;
	printf("Input a character: ");
	scanf("%c", &c1);	
	printf("Input your age: ");
	scanf("%d", &n);
	printf("Input your score: ");
	scanf("%f", &vF);
	printf("Input your height: ");
	scanf("%lf", &db);
	
	printf("Your inputed character: %c", c1);
	printf("\nYour age: %d", n);
	printf("\nYour score: %.2f", vF);
	printf("\nYour height: %.2lf", db);
		
	return 0;
}
