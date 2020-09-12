#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// perimeder & area of a circle, a square and a rectangle
int main(int argc, char *argv[]) {
	float length, width, r, pi, edge;
	printf("Enter length of the rectangle : ");
	scanf("%f", &length);
	printf("Enter width of the rectangle : ");
	scanf("%f", &width);
	printf("The area of the rectangle is : %.2f\n", length * width);
	printf("The perimeder of the rectangle is : %.2f\n", (length + width)*2);
	
	printf("Enter radious :  ");
	scanf("%f", &r);
	pi = 3.14;
	printf("The area of the circle is : %.2f\n", pi*r*r);
	printf("The perimeter of the circle is : %.2f\n", 2*pi*r);
	printf("Enter edge : ");
	scanf("%f", &edge);
	printf("The area of the square is : %.2f\n", edge*edge);
	printf("The perimeter of the square is : %.2f", edge * 4);
	
	return 0;
}
