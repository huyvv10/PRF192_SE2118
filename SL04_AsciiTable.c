#include <stdio.h>

int main(){
	int i, n = 255;
	for (i=1; i<=n; i++){
		if (i%20==0) getchar();
		printf("%c \t %d \t %o \t %x\n", i, i, i, i);
	}
	return 0;
}
