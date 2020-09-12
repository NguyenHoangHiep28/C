#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// marks sum & average
int main(int argc, char *argv[]) {
	float maths, physics, chemistry, sum, avg;
	printf("Enter Maths mark : ");
	scanf("%f", &maths);
	printf("Enter Physics mark : ");
	scanf("%f", &physics);
	printf("Enter Chemistry mark : ");
	scanf("%f", &chemistry);
	sum = maths + physics + chemistry;
	avg = sum / 3;
	printf("Your total mark is : %.2f\n", sum);
	printf("Your average mark is : %.2f", avg);
	return 0;
}
