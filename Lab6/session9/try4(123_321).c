#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i,j,row;
	printf("Enter number of row1: ");
	scanf("%d", &row);
	
	for (i = 1; i<=row; i++){
		printf("\n");	
		for(j=1; j<=i; j++){
			printf("%d", j);
		}
	}
	printf("\n\nEnter number of row. :");
	scanf("%d", &i);
	for ( ;i>=1; i--){
		printf("\n");
		for(j=1; j<=i;j++){
			printf("%d", j);
		}
	}
	
}

