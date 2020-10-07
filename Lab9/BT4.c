#include <stdio.h>
#include <stdlib.h>


void main() 
{
	
	int i, checking, ary[5];
	for (i = 0; i < 5; i++)
	{
		printf("\nEnter number %d : ", i+1);
		scanf("%d", &ary[i]);
	}
	
	printf("\nCac so nguyen to : ");
	
	for(i = 0; i < 5; i++)
	{
		checking = check(ary[i]);
		if ( checking == 1)
		{
			printf("\n%d", ary[i]);
		}
	}
	
	
}

int check(int integer)
{
	int i;
	for (i = 2; i < integer; i++)
	{
		if ((integer % i) == 0)
		{
			return 0;
			break;
		}
		else
		{
			return 1;
			break;
		}
	}
}
