#include<stdio.h>
void main()
{
	int n,i,max=0;
	printf("Enter how many no.you want :\n");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter no.:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	printf("Largest no. = %d",max);
}
