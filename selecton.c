#include<stdio.h>

int swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int Selectionsort(int a[], int n)
{
	int i,j,min_ind;
	for(i=0;i<n;i++)
	{
		min_ind = i;
		for(j=i+1;j<n;j++)
		{
			if (a[min_ind] > a[j])
			{
				min_ind = j;
			}
		}
		swap(&a[i],&a[min_ind]);
	}
	
	printarray(a,n);
}

int printarray(int a[],int n)
{
	int i;
	printf("\nAfter the Selection Sort:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

int  main()
{
	int n;
	printf("Enter the no. of array:\n");
	scanf("%d",&n);
	
	int a[n],i;
	printf("Enter the element of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nBefore the Selection Sort:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	Selectionsort(a,n);
}
