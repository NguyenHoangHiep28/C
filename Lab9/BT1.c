#include <stdio.h>
#include <stdlib.h>

int reverse(int arr[], int size);
int main()
{
	int ary[5], i;
	for ( i = 0; i < 5; i++)
	{
		printf("Enter number %d :\t", i+1);
		scanf("%d", &ary[i]);
		
	}
	printf("The reversed array : ");
	reverse(ary, 5);
	return 0;
}
int reverse(int arr[], int size)
{
	int i;
	for (i = size -1; i >=0; i--)
	{
		printf("\n%d", arr[i]);
	}
	return;
}
