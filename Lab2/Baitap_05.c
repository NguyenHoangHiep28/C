#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// find area of a trapezoid
int main(int argc, char *argv[]) {
	float top, bottom, height, area;
	printf("Enter top : ");
	scanf("%f", &top);
	printf("Enter bottom : ");
	scanf("%f", &bottom);
	printf("Enter height : ");
	scanf("%f", &height);
	area = (top + bottom) / 2 * height;
	printf("The area of the Trapezoid is : %.2f", area);
	
	return 0;
}
