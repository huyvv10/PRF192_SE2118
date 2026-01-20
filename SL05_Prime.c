#include <stdio.h>
//Return 1 if n is a prime number. Return 0 otherwise
int isPrime(int n){
	int i;
	if (n<2) return 0;
	for (i=2; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;	
}

//List prime numbers from 2 to n.
void listPrimeToN(int n){
	int i;
	if (n<2) return;
	for (i=2; i<=n; i++)
		if (isPrime(i)==1)
			printf("%d ", i);
}
//Return the total value of all prime numbers from 2 to n.
int sumPrimeToN(int n){
	
}

void listTheFirstNPrimeNumber(int n){
	
}

int main(){
	int n;
	printf("Input n = "); scanf("%d", &n);
	if (isPrime(n)==1)
		printf("%d is a prime number.", n);
	else
		printf("%d is not a prime number.", n);
	printf("\n");
	listPrimeToN(n);		
	return 0;
}
