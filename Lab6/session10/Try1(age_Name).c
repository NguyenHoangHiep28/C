#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i, age;
	char name[40];
	
	printf("Enter your name : ");
	gets(name);
	printf("Enter you age : ");
	scanf("%d", &age);
	
	i = 1;
	while ( i <= age){
		printf("%d, %s\n",i, name);
		i++;
	}
}
