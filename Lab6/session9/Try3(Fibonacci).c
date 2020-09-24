#include <stdio.h>
#include <stdlib.h>

void main()
{
	int sum, i, num1,sum2, n;
	num1 =0;
	sum2 = 1;
	
	printf("Enter n : ");
	scanf("%d", &n);
	printf("Fibonacci series : ");
	
	for ( i = 0; i < n; i++){
		if ( i == 0){
			printf("%d, ", sum2);
		}
		sum = num1 + sum2;
		num1 = sum2;
		sum2 = sum;
		printf("%d, ", sum);
		
	}
}
