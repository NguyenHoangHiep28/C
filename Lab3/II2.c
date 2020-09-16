#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	x = (2+3)*6;
	printf("Result of x = (2+3)*6 is : %d", x);
	x = (12+6)/2*3;
	printf("\nResult of x = (12+6)/2*3 is %d", x);
	y = 3 + 2 * (x=7/2);
	printf("\nResult of y = 3 + 2 * (x=7/2) is : %d ", y);
	x = (int) 3.8 + 3.3;
	printf("\nResult of x = (int)3.8 + 3.3 is : %d", x);
	x = (2+3)*10.5;
	printf("\nResult of x = (2+3)*10.5 is : %d ", x);
	x = 3/5 *22.0;
	printf("\nResult of x = 3/5 *22.0 is : %d ", x);
	x = 22.0*3/5;
	printf("\nResult of x =22.0*3/5 is : %d ", x);
	
	
	return 0;
}
