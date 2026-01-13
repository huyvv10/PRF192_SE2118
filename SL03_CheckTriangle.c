#include <stdio.h>

int main(){
	int a, b, c;
	
	printf("Input three number as 3 edges of a triangle: ");
	scanf("%d%d%d", &a, &b, &c);
	
//	printf("%d %d %d", a, b, c);
	if (a+b > c && a+c > b && b+c > a)
		printf("%d, %d and %d are three edges of a triangle.", a, b, c);
	else
		printf("%d, %d and %d are not three edges of a triangle.", a, b, c);
		
	return 0;
}
