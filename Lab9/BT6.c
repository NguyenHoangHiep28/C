#include <stdio.h>
#include <stdlib.h>


void upper_case(char str[]);
void main()
{
	char s[30];
	printf("Please enter string s : ");
	gets(s);
	printf("Upper case : \n");
	upper_case(s);
	

}

void upper_case( char str[])
{
	int i, j;
	for (i = 0; i < strlen(str) ; i++)
	{
		if (str[i] == 32)
			continue;
		else
			{
				str[i] = str[i] - 32;
			}
	}
	for(j = 0; j < strlen(str); j++)
	{
		printf("%c", str[j]);
	}

}


