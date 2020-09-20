#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{
	int count = 0;
	while (count < 100)
	{
		printf("This goes on forever, HELP!!!\n");
		count +=10;
		printf("\t%d", count);
		count -= 10;
		printf("\t%d", count);
		printf("Ctrl - c will help");
	}

}
