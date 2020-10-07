#include <stdio.h>
#include <stdlib.h>
int count(char s[],char chr);
int main()
{
	char ch;
	char str[30];
	printf("Enter string : ");
	gets(str);
	printf("Enter char : ");
	ch = getchar();
	printf("\nThe number of characters after ch is : %d", count(str, ch));
}
int count(char s[], char chr)
{
	int i, counts;
	for ( i = 0; i < strlen(s); i++)
	{
		if (s[i] == chr)
		{
			counts = strlen(s) - (i + 1);
			break;
		}
	}
	return (counts);
}


