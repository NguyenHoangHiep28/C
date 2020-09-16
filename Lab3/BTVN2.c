#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float cm, inch, foot;
	printf("Enter centimeter : ");
	scanf("%f", &cm);
	inch = cm / 2.54;
	foot = inch / 12;
	printf("%.1f cm = %.1f inches = %.1f feet", cm, inch, foot);
	
	return 0;
}
