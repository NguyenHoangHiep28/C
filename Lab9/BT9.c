#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double rating(float grd[], int size);
void main()
{
	int i;
	float grade[5], avg;
	for (i = 0; i < 5; i++)
	{
		printf("Enter grade of subject %d : ", i+1);
		scanf("%f", &grade[i]);
	}
	avg = rating(grade, 5);
	printf("Your average grade is : %.2lf\n", avg);
	if (avg < 5)
	{
		printf("Toanggggg :))) Thi lai nhe!");
	}
	else if( (avg >= 5) && (avg < 6.5) )
	{ 
		printf("Try harder ! (TB)");
	}
	else if ((avg >= 6.5) && (avg <8)) 
	{ 
		printf("sound good! (K)");
	}
	else
		printf("well done! (G)");
}
double rating(float grd[], int size)
{
	double sum = 0, avg;
	int i;
	for (i = 0; i < size; i++ )
	{
		sum += grd[i];
	}
	avg = sum / size;
	return (avg);
}
