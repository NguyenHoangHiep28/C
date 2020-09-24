#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2, i, sum = 0, checkOfNum1, checkOfNum2;
	printf("Enter num1 : ");
	scanf("%d", &num1);
	printf("Enter num2 : ");
	scanf("%d", &num2);
	
	checkOfNum1 = num1 % 2;
	checkOfNum2 = num2 % 2;
	if (num1 < num2)  {
	
		if ( checkOfNum1 == 0) {
			num1 = ++num1;
			for (i = num1; i< num2; i+=2){
				sum += i;
			}
			printf("Sum of all odd numbers are : %d ", sum);
		}
		else {
			num1 += 2;
			for (i = num1; i<num2; i+=2){
				sum += i;
			}
			printf("Sum of all odd numbers are : %d", sum);
		}
	}
	else if (num1 > num2){
			if (checkOfNum2 == 0){
				num2 = ++num2;
				for (i= num2; i < num1; i+=2){
					sum += i;
				}
				printf("Sum of all odd numbers are : %d", sum);
			}
			else {
				num2 += 2;
				for ( i = num2; i< num1; i +=2){
					sum += i;
				}
				printf("Sum of all odd numbers are : %d", sum);
			}
	}
	return 0;
}
