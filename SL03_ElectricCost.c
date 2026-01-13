#include <stdio.h>

int main(){
	int n;
	float rs;
	printf("Input your number of kwh: ");
	scanf("%d", &n);
	
	if (n<=50)
		rs = n * 800;
	else if (n <=100)
		rs = 50 * 800 + (n-50)*1500;
	else if (n <=150)
		rs = 50 * 800 + 50*1500 + (n-100)*2100;
	else if (n <=200)
		rs = 50 * 800 + 50*1500 + 50*2100 + (n-150)*2800;
	else 
		rs = 50 * 800 + 50*1500 + 50*2100 + 50*2800 + (n-200)*3500;
	printf("You comsume %d\nYou need to pay the total cost: %.2f vnd", n, rs*1.1);
					
	return 0;
}
