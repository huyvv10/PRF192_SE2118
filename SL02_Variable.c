#include <stdio.h>

int main(){
	char varC = 'F';
	int n = 10;
	float varF = 8.5F;
	double db = 9.7;
	printf("Gia tri cua bien varC = %c \t Dia chi cua varc %x", varC, &varC);
	printf("\nGia tri cua bien n = %d \t %x", n, &n);
	printf("\nGia tri cua bien float = %f \t %x", varF, &varF);
	printf("\nGia tri cua bien float = %.2f \t %x", varF, &varF);
	printf("\nGia tri cua bien double = %lf \t %x", db,&db);
	printf("\nGia tri cua bien double = %.1lf", db);
	
	return 0;
}
