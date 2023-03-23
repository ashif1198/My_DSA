#include<stdio.h>

struct Distance {
	int feet;
	float inch;
}d1,d2,result;

void main()
{
	printf("Enter the first Distance:\n");
	printf("Enter the Feet :\n");
	scanf("%d",&d1.feet);
	printf("Enter the Inch:\n");
	scanf("%f",&d1.inch);
	
	printf("Enter the 2nd Distance:\n");
	printf("Enter the Feet :\n");
	scanf("%d",&d2.feet);
	printf("Enter the Inch:\n");
	scanf("%f",&d2.inch);
	
	result.feet = d1.feet + d2.feet;
	result.inch = d1.inch + d2.inch;
	
	if(result.inch >= 12)
	{
		result.inch = result.inch - 12 ;
		++result.feet;
	}
	
	printf("Sum of distance = %d'%f",result.feet,result.inch);
	
}
