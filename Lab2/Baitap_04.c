#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float C, F;
	printf("Enter degree Celsius : ");
	scanf("%f", &C);
	F = 9*C / 5 + 32;
	printf("%f oC = %.2f oF", C, F);
	
	
	return 0;
}
