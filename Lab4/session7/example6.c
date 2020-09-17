#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	int x, y;
	x = y = 0;
	
	printf("Enter Choice ( 1 - 3 ) :");
	scanf("%d", &x);
	if ( x == 1)
	{
		printf("\nEnter value for y (1-5) :");
		scanf("%d", &y);
		if ( 1<=y && y<=5)
			printf("\nThe value for y is: %d", y);
		else 
			printf("\nThe value of y exceeds 5 or below 1");
			
	}
	else 
		printf("\nChoice entered was not 1");
}
