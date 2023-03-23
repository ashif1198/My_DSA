#include<stdio.h>
int swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int Selection(int a[],int n)
{
    int i,j,min;
    for(i=0;i<n;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(a[min] > a[j])
                min = j;
        }
        swap(&a[i],&a[min]);
    }
    printf("\n\nAfter Sorting;\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
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
    printf("\n\nBEfore Sorting:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    Selection(a,n);
}
