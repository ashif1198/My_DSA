#include<stdio.h>

int interpulation(int a[],int low,int high,int x)
{
    int pos;
    while(low<=high && x>=a[low] && x <= a[high])
    {
        pos = low + ((x-a[low])*(high-low))/(a[high]-a[low]);//intterpulation formula
        if(x > a[pos])
            low = pos+1;
        else if(x<a[pos])
            high = pos -1;
        else
            return pos;
    }
    return -1;
}

int main()
{
    int n,x;
    printf("Enter the no. of element:\n");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the element:\n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

    printf("Search Element is:\n");
    scanf("%d",&x);
    int r;
    r = interpulation(a,0,n-1,x);
    if(r !=-1)
        printf("\nELEMENT INDEX NO. IS = %d",r);
    else
        printf("\nELEMENT NOT FOUND:\n");
}
