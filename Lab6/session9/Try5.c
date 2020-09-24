#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i, j;
	for ( i = 7; i >= 1; i--){
		printf("\n");
		for ( j = 1; j<= i; j++){
			printf("*");
		}
	}
}
