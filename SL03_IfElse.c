#include <stdio.h>

int main(){
	int n;
	printf("Input n = ");
	scanf("%d", &n);
	
	if (n%2 == 0)
		printf("%d is an even number.", n);
	else
		printf("%d is an odd number.",n);
		
	int hb;
	hb = (n >= 8 ? 2500000 : n >= 7 ? 1000000 : 0);
	printf("Your stipend is %d", hb);	
			
	return 0;
}
