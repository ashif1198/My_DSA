#include<stdio.h>
#include<math.h>
int n = 10;
int mean(int b[])
{
	int j,sum=0,m;
	for(j=0;j<n;j++)
	{
		sum += b[j];
	}
	m = sum/n;
	SD(b,m);
}

int SD(int c[],int m)
{
	int i,S=0,SD;
	for(i=0;i<n;i++)
	{
		S += pow(c[i]-m, 2);
	}
	SD = sqrt(S/n);
	printf("THE SD = %d",SD);
}
void  main()
{
	int i,a[n];
	printf("Enter no.:");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mean(a);
}
