#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 4*4*4*4;
	printf("%d\n",a);
	int b = 23.5;
	printf("%d\n", b);
	int c = 10;
	int d = c + c++;
	printf("%d\n",d);
	int e = -5;
	int f = -e;
	printf("%d", f);
	
	return 0;
}
