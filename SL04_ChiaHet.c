#include <stdio.h>
//Chia het cho 3 nhung khong chia het cho 5
int main(){
	int i, n, S=0;
	printf("Input n = "); scanf("%d", &n);
	for (i=0; i<=n; i++){
		if (i%3==0 && i%5!=0){
			printf("%d + ", i);		
			S += i; 			//S = S + i;
		}
	}
	printf("\b\b= %d\n", S);	
	return 0;
}
