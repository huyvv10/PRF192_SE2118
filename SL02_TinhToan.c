#include <stdio.h>

int main(){
	int x,y;
	
	printf("Input x = "); scanf("%d", &x);
	printf("Input y = "); scanf("%d", &y);
	
	printf("%d + %d = %d\n", x, y, x+y);
	printf("%d - %d = %d\n", x, y, x-y);
	printf("%d x %d = %d\n", x, y, x*y);
	printf("%d / %d = %f\n", x, y, (float)x/y);
	printf("%d / %d = %.2f\n", x, y, (float)x/y);
	return 0;
}
