#include <stdio.h>
#include <stdlib.h>

main()
{
	int i, j, k, num;
	i = 0;
	/*
	//nested for loop
	printf("Enter no. of rows :");
	scanf("%d", &i);
	printf("\n");
	for(j = 0; j < i; j++)
	{
		printf("\n");
		for (k = 0; k <= j; k++)
			printf("*");
	} 
	*/
	// num = 255 -> end loop
	for ( num = 0; num != 255;)
	{
		printf("Enter no.");
		scanf("%d", &num);
	}
	// infinite loop
	for (; ;)
	{
		printf("This will go on and on");
		i = getchar();
		if (i=='X' || i =='x')
			break;
			
	}
}
