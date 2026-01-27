#include <stdio.h>

void menu() {
	printf("\n\n---------\n");
	printf("1. Tim uoc so chung lon nhat cua 2 so\n");
	printf("2. Tim boi so chung nho nhat cua 2 so\n");
	printf("3. Kiem tra so nguyen to\n");
	printf("4. Liet ke so nguyen to den n\n");
	printf("5. Liet ke n so nguyen to dau tien\n");
	printf("0. Quit\n");
	printf("Your selection: ");
}
//Return 1 if n is a prime number. Return 0 otherwise.
int isPrime(int n) {
	int i;
	if (n<2) return 0;
	for (i=2; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;
}

//List prime numbers from 2 to n
void listPrimeToN(int n) {
	int i;
	if (n<2) return;
	for (i=2; i<=n; i++)
		if (isPrime(i)==1)
			printf("%d ", i);
}

//List the first n prime numbers
void listTheFirstNPrimes(int n) {
	int i=2, count=0;
	while (count<n){
		if (isPrime(i)==1){
			printf("%d ", i);
			count++;
		}
		i++;			
	}
}

//Tim uoc so chung lon nhat cua a va b
int UCLN(int a, int b) {
	while (a != b) {
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}

int UCLN2(int a, int b) {
	return b==0 ? a : UCLN2(b, a%b);
}

//Tim boi so chung nho nhat cua a va b
int BSCNN(int a, int b) {
	return a > b ? b*a/UCLN(a,b) : a*b/UCLN(a,b);
}

int main() {
	int sel;
	int a, b;
	do {
		menu();
		scanf("%d", &sel);
		switch (sel) {
			case 1:
				printf("Chuong trinh tim USCLN\n");
				printf("Input a = ");
				scanf("%d", &a);
				printf("Input b = ");
				scanf("%d", &b);
				int result = UCLN(a,b);
				printf("USCNL cua %d va %d la: %d", a, b, result);
				break;
			case 2:
				printf("Chuong trinh tim BSCNN\n");
				printf("Input a = ");
				scanf("%d", &a);
				printf("Input b = ");
				scanf("%d", &b);
				printf("BSCNN cua %d va %d la: %d", a, b, BSCNN(a,b));
				break;
			case 3:
				printf("3. Check so nguyen to\n"); 
				printf("Input a = "); scanf("%d", &a);
				if (isPrime(a)==1)
					printf("%d is a prime number", a);
				else
					printf("%d is not a prime number", a);
				break;
			case 4:
				printf("4. Liet ke so nguyen to den n\n");
				printf("Input n = "); scanf("%d", &a);
				listPrimeToN(a);
				break;
			case 5:
				printf("Liet ke n so nguyen to dau tien\n");
				printf("Input n = "); scanf("%d", &a);
				listTheFirstNPrimes(a);
				break;
			case 0:
				printf("Bye bye...!");
				break;
			default:
				printf("Invalid selection. Please select again.");
		}
	} while (sel != 0);

	return 0;
}
