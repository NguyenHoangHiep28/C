#include <stdio.h>
#include <stdlib.h>

void main()
{
	int cnt = 0, num;
	system("cls");
	
	do
	{
		printf("\n Enter a Number: ");
		scanf("%d", &num);
		printf("No. is %d", num);
		cnt++;
	}
	while (num != 0);
	printf("\n The total numbers entered were %d", --cnt);
}
