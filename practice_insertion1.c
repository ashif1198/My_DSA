#include<stdio.h>

int insertionsort(int a[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j = i-1;
        while(key<a[j] && j>=0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    printf("Sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}

int main()
{
    int n;
    printf("Enter the number of element in array:\n");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the value in an array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    insertionsort(a,n);
}
