#include <stdio.h>
#include <stdlib.h>
int x, y;
main()
{
	
	x = 15; y = 20;
	printf("x = %d, y = %d\n", x, y);
	swap(x, y);
	printf("\nAfter interchanging x = %d, y = %d\n", x, y);
}
swap( int temp)
{

	temp = x;
	x = y;
	y = temp;
	return;
}
