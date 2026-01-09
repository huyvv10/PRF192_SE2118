#include <stdio.h>

int main(){
	int x = 10, y = 8;
	int a = 5, b = 2;
	x++;
	y--;
	a += x; 	//a = a + x
	b -= y;		//b = b - y
	printf("x = %d, y = %d\n", x, y);
	printf("a = %d, b = %d", a, b);
	 
	return 0;
}
