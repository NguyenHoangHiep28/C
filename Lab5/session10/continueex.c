#include <stdio.h>
#include <stdlib.h>

void main()
{
	int cnt;
	system("cls");
	for (cnt = 1; cnt <=10; cnt++)
	{
		if (cnt == 5)
			continue;
		printf("%d\t", cnt);
	}
}
