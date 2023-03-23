#include<stdio.h>

int main()
{
	int n;
	printf("Enter the no. of process :\n");
	scanf("%d",&n);
	
	int p[n],bt[n],wt[n],tat[n],i,min;
	
	printf("Enter the burst time :\n");
	for(i=0;i<n;i++)
	{
		printf("P%d = ",i+1);
		scanf("%d",&bt[i]);
		p[i]=i+1;
	}
	
	
	// sorting accordinng to burst time
	int j,temp;
	for(i=0;i<n;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if (bt[j] < bt[min])
			{
				min =j;
			}
			
			temp = bt[i];
			bt[i] = bt[min];
			bt[min]=temp;
			
			temp = p[i];
			p[i]=p[min];
			p[min] = temp;
		}
	}
	
	wt[0] = 0;
	int total = 0;
	for(i=1;i<n;i++)
	{
		wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
  
        total+=wt[i];
	}
	float avg_wt = (float)total / n;
	
	total=0;
  
    printf("Process    Burst Time    WT  TAT \n");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];   
        total+=tat[i];
        printf("%d          %d             %d     %d\n",p[i],bt[i],wt[i],tat[i]);
    }
    
    float avg_tat=(float)total/n;    
    printf("nnAverage Waiting Time=%f\n",avg_wt);
    printf("nAverage Turnaround Time=%fn",avg_tat);
}
