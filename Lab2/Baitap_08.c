#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int integer;
	float num;
	double num2;
	char character1;
	printf("Kieu int : %d Byte\n", sizeof(int));
	printf("So nguyen : ");
	scanf("%d", &integer);
	printf("\nKieu float : %d Byte \n", sizeof(float));
	printf("So thuc kieu float: ");
	scanf("%f", &num);
	printf("\nKieu double: %d Byte \n", sizeof(double));
	printf("So thuc kieu double: ");
	scanf("%lf", &num2);
	printf("\nKieu char :  %d Byte \n", sizeof(char));
	printf("Ky tu : ");
	scanf("%c", &character1);
	printf("\nKieu long int : %d \n", sizeof(long int));
	printf("\nKieu long double : %d \n", sizeof(long double));
	return 0;
}
