#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numList[10], i;
	for (i = 0; i < 10; i++)
	{
		printf("Please enter number %d : ", i+1);
		scanf("%d", &numList[i]);
	}
	printf("\nReversed list : ");
	for (i = 9; i>=0; i--)
	{
		printf("\n\t%d ", numList[i]);
	}
}
