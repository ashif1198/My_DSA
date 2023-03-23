#include<stdio.h>
#define max 50
int merge(int a[],int l,int mid,int h)
{
    int i,j,k,b[max];
    i=l;
    j=mid+1;
    k=l;
    while(i<=mid && j<=h)
    {
        if(a[i] <= a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
    }
    while(i<=mid)
    {
        b[k++]=a[i++];
    }
    while(j<=l)
    {
        b[k++]=a[j++];
    }
    for(i=l;i<h+1;i++)
        a[i]=b[i];

}


int mergesort(int a[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid = (l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}

int main()
{
    int n;
    printf("Enter the number of element in array between 50 element:\n");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the value in an array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n\nBEfore Sorting:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    mergesort(a,0,n-1);
     printf("\n\nSorted array :\n");
	for(i=0;i<n;i++)
	{
		printf("  %d",a[i]);
	}


}
