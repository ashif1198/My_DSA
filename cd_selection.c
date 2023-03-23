#include<stdio.h>
int swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int Selectionsort(int a[],int n)
{
    int min,i,j;
    for(i=0;i<n;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if (a[min] > a[j])
                min = j;
        }
        swap(&a[i],&a[min]);
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
