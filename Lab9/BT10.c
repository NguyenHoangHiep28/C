#include <stdio.h>
#include <stdlib.h>

int countVowels(char str[]);
int main()
{
	char s[100];
	int i;
	printf("Enter a string : ");
	gets(s);
	countVowels(s);
	
}
int countVowels(char str[])
{
	int i, count = 0, countU = 0, countu =0, countE = 0, counte = 0, countO = 0, counto = 0,
		countA = 0, counta = 0, countI = 0, counti = 0, countOther = 0;
	float percentage;
	for ( i = 0; i < strlen(str); i++)
	{
		switch (str[i])
		{
			case 'u':
				countu++;
				break;
			case 'U':	
				countU++;
				break;
			case 'e':
				counte++;
				break;
			case 'E':
				countE++;
				break;
			case 'o':
				counto++;
				break;
			case 'O':
				countO++;
			case 'a':
				counta++;
				break;
			case 'A':
				countA++;
				break;
			case 'i':
				counti++;
				break;
			case 'I':
				countI++;
		}
	}
	count = countU + countu + countE + counte + countO + counto +
			countA + counta + countI + counti;
	countOther =  strlen(str) - count;
	percentage = ((float)countOther /(float) strlen(str)) * 100;
	
	printf("The number of vowels in string is : %d", count);
	printf("\nThe number of other characters in string is : %d",countOther);
	printf("\nThe percentage of other characters in string is : %.2f", percentage);
			
	printf("\nNumber of U : %d", countU);
	printf("\nNumber of u : %d", countu);
	printf("\nNumber of E : %d", countE);
	printf("\nNumber of e : %d", counte);
	printf("\nNumber of O : %d", countO);
	printf("\nNumber of o : %d", counto);
	printf("\nNumber of A : %d", countA);
	printf("\nNumber of a : %d", counta);
	printf("\nNumber of I : %d", countI);
	printf("\nNumber of i : %d", counti);
	
	
}

