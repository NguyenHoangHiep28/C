#include <stdio.h>
#include <stdlib.h>

void main()
{
	float com = 0, sales_amt;
	system("cls");
	printf("Enter the Sales Amount: ");
	scanf("%f", &sales_amt);
	if (sales_amt >= 10000)
		com = sales_amt * 0.1;
	printf("\n Commission = %.3f", com);
	
}
