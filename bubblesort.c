#include<stdio.h>

int bubblesort(int a[], int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j] > a[j+1] )
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		
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

int main()
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
	
	
	bubblesort(a,n);
}
