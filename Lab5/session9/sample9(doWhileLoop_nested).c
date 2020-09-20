#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	int x;
	char i, ans;
	i = ' ';
	do{
		system("cls");
		x = 0;
		ans = 'y';
		printf("\nEnter sequence of character: ");
		do {
			i = getchar();
			x++;
			
		}
		while(i != '\n');
		i = ' ';
		printf("\nNumber of characters entered is %d", --x);
		printf("\nMore sequences (Y/N)?");
		ans = getch();
		
	}while (ans == 'Y'|| ans == 'y');
}
