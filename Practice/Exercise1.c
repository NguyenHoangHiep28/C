#include <stdio.h>
#include <stdlib.h>
void menu(void);
int sum(int x, int y);
int sub(int x, int y);
int multi(int x, int y);
float divi(int x, int y);
int main()
{
	int integer1, integer2, choice1, choice2;
	choose : {
	if (choice1 == 6)
	{
		printf("\n(Exit!)");
		return 0;
	}
	printf("\n1. Input 2 integers  ");
	menu();
	printf("\nEnter your choice : ");
	scanf("%d", &choice1);
	}
	if (choice1 == 1)
		{
			printf("\nPlease enter integer1 : ");
			scanf("%d", &integer1);
			printf("Please enter integer2 : ");
			scanf("%d", &integer2);
			menu();
			while (choice2 != 6)
			{
			printf("\n\nEnter your choice : ");
			scanf("%d", &choice2);
			
				if (choice2 == 2)
					printf("\nSum of 2 integers is : %d", sum(integer1, integer2));
				else if (choice2 == 3)
					printf("\nSubstraction of 2 integers is : %d", sub(integer1, integer2));
				else if (choice2 == 4)
					printf("\nMultiplication of 2 integers is : %d", multi(integer1, integer2));
				else if (choice2 == 5)
					printf("\nDivision of 2 integers is : %.2f", divi(integer1, integer2));
				else if (choice2 == 6)
					printf("\nExit! ");
				else	
					printf("\nInvalid choice !");
			}
		}
	else 
	{
		printf("\nPlease enter integers first!");
		goto choose;
	}
}
void menu(void)
{
	printf("\n2. Calculate sum of 2 integers ");
	printf("\n3. Calculate substraction of 2 integers ");
	printf("\n4. Calculate multiplication of 2 integers ");
	printf("\n5. Calculate division of 2 integers ");
	printf("\n6. Exit");
	return;
}
	
int sum(int x, int y)
{
	return (x + y);
}
int sub(int x, int y)
{
	return (x - y);
}
int multi(int x, int y)
{
	return (x * y);
}
float divi(int x, int y)
{
	float division;
	division = (float)x / (float)y;
	return (division);
}


