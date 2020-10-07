#include <stdio.h>
#include <stdlib.h>


minIndex(int arr[])
{
	int min, i, index;
	min = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i] < min)
		{
			index = i;
		}
		else
			index = 0;
	}
	return index;
}

int main()
{
	int ary[10], i, index;
	for (i=0;i<10;i++)
	{
		printf("Enter number %d :  ", i+1);
		scanf("%d", &ary[i]);
	}

	printf("%d", minIndex(ary));
	

}
