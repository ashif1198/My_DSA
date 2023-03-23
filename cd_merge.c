#include<stdio.h>
#define max 50
int merge(int a[],int f,int mid,int l)
{
    int i,j,k,b[max];
    i=f;
    j=mid+1;
    k=f;
    while(i<=mid && j<=l)
    {
        if(a[i] <= a[j])
        {
            b[k++] = a[i++];
        }
        else
            b[k++]=a[j++];
    }
    while(i<=mid)
    {
        b[k++] = a[i++];
    }
    while(j<=l)
    {
        b[k++] = a[j++];
    }
for(i=f;i<l+1;i++)
	{
	 	a[i] = b[i];
	}
}

int mergesort(int a[],int f,int l)
{
    int mid;
    if(f<l)
    {
        mid = (f+l)/2;
        mergesort(a,f,mid);
        mergesort(a,mid+1,l);
        merge(a,f,mid,l);
    }
}



void main()
{
	int a[max],n,i;
	printf("Enter the no. of element :\n");
	scanf("%d",&n);

	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before Sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("  %d",a[i]);
	}
	printf("\n");

	mergesort(a,0,n-1);
	printf("Sorted array :\n");
	for(i=0;i<n;i++)
	{
		printf("  %d",a[i]);
	}
}
