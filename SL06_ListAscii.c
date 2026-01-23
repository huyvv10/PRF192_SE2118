#include <stdio.h>

int main(){
	char c,c1,c2;
	scanf("%c", &c1);
	getchar();			//clear buffer
	scanf("%c", &c2);
	if (c1>c2){
		char tg = c1; c1=c2; c2=tg;
	}
	
	for (c=c1; c<=c2; c++)
		printf("\n%c \t %d \t %o \t %x", c, c, c, c);

	printf("\n\n---Using while ----\n");
	c=c1;
	while (c<=c2){
		printf("\n%c \t %d \t %o \t %x", c, c, c, c);
		c++;				
	}
	
	printf("\n\n---Using while ----\n");
	c=c1;
	do{
		printf("\n%c \t %d \t %o \t %x", c, c, c, c);
		c++;		
	}while (c<=c2);
	return 0;
}
