#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	int sqr;
	
	printf("Enter a number!\n");
	scanf("%d", &number);
	sqr = number * number;
	printf("result : %d", sqr);
	
	return 0;
	}
