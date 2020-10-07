#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float heronArea(float x, float y, float z);
float main()
{
	float a, b, c;
	printf("Please enter 3 edges of the triangle : ");
	scanf("%f%f%f", &a, &b, &c);
	heronArea(a,b,c);
}
float heronArea(float x, float y, float z)
{
	float  p;
	double area, area2;
	if ((x + y - z )> 0 && (x + z - y) > 0 && (z+y-x) >0)
		{
			p = (x + y + z) / 2;
			area2 = p*(p-x)*(p-y)*(p-z);
			area =  sqrt(area2);
			printf("The area is : %.2lf", area);
			return;
		}
	else 
		{
		printf("input error !");
		return;
		}
	
}
