#include <stdio.h>

int main(){
	int n;
	printf("Input a day of week: "); scanf("%d", &n);
	switch (n){
		case 2:
			printf("Thu 2"); break;
		case 3:
			printf("Thu 3"); break;
		case 4:
			printf("Thu 4"); break;
		case 5:
			printf("Thu 5"); break;
		case 6:
			printf("Thu 6"); break;
		case 7:
			printf("Thu 7"); break;
		case 8:
			printf("Chu nhat"); break;
		default:
			printf("%d khong phai la mot ngay trong tuan", n);
	}

	return 0;
}
