#include <stdio.h>
#include <stdlib.h>
int sum(void);
int main()
{
	printf("sum is : %d", sum());
}

int sum(void)
{
	int i, sum = 0;
	for ( i = 301; i < 500 ; i++)
	{
		if ((i % 7) == 0)
			sum += i;
	}
	return (sum);
}
 
