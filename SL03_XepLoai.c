#include <stdio.h>

int main(){
	float math, eng, lite, gpa;
	printf("Input your math score: "); scanf("%f", &math);
	printf("Input your english score: "); scanf("%f", &eng);
	printf("Input your literature score: "); scanf("%f", &lite);
	gpa = (math+eng+lite)/3;
	
	if (gpa >= 9)
		printf("Your gpa = %.2f, you are excellence", gpa);
	else if (gpa >= 8)
		printf("Your gpa = %.2f, you are good", gpa);
	else if (gpa >= 7)
		printf("Your gpa = %.2f, you are well", gpa);
	else if (gpa >= 5)
		printf("Your gpa = %.2f, you are fair", gpa);
	else 
		printf("Your gpa = %.2f, you are poor", gpa);	
	
	return 0;
}
