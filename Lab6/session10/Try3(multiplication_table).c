#include <stdio.h>
#include <stdlib.h>

void main(){
	int number, i;
	printf("Please enter a number : ");
	scanf("%d", &number);
	printf("\nThe multiplication table of %d is : ", number );
	for ( i = 1; i<=10; i++){
		printf("\n%d * %d = %d", number, i, number * i);
	}
}
