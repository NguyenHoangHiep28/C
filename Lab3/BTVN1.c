#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s, m =3, n = 5, r, t;
	float x = 3.0, y;
	t = n/m;
	printf("t = %d", t);
	r = n%m;
	printf("\nr = %d", r);
	y = (float)n/(float)m;
	printf("\ny = %lf", y);
	t = x*y - m/2;
	printf("\n t = %lf",t );
	x = x*2.0;
	printf("\n x = %lf", x);
	s = (m+n)/r;
	printf("\n s = %d", s);
	y = --n;
	printf("\n y = %d", y);
	
	return 0;
}
