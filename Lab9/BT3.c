#include <stdio.h>
#include <stdlib.h>

void check(unsigned integer);
void main()
{
	unsigned num;
	printf("Enter number : ");
	scanf("%u", &num);
	check(num);
	
	
}
void check(unsigned integer)
{
	int i;
	for (i = 2; i < integer; i++)
	{
		if ((integer % i) == 0)
		{
			printf("%u ko la so nguyen to", integer);
			break;
		}
		else
		{
			printf("%u la so nguyen to", integer);
			break;
		}
	}
	return;
}
