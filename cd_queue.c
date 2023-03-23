#include <stdio.h>
#include<stdlib.h>
#define max 10
int q[max];
int r=-1;
int f=-1;

int enqueue(int item)
{
 if (isfull())
        printf("Queue is overflow:\n");
 else
 {
    if (f == -1)
    {
        f = f+1;
        q[++r] = item;
    }
    else
        q[++r]=item;
 }
}

int dequeue()
{
    int item;
    if (isempty())
        printf("Queue is underflow:\n");
    else
    {
        item = q[f++];
    }
    return item;
}
int isfull()
{
    if (r == max-1)
        return 1;
    else
        return 0;
}

int isempty()
{
    if ((f==-1) || (r==f))
        return 1;
    else
        return 0;
}

int display()
{
    if (isempty())
        printf("Queue is Empty:\n");
    else
    {
        int i;
        printf("\n Display the whole queue: \n");
        for(i=r;i>=f;i--)
            printf("%d\n",q[i]);
        printf("\n");
    }
}

int peek()
{
    if (isempty())
        printf("Queue is Empty:\n");
    else
        return q[r];
}

int pull()
{
    if(isempty())
        printf("Queue is empty:\n");
    else
        return q[f];
}
void main()
{
	int ch,item;
	while(1)
	{
	printf("\n 1.Enqueue \n");
	printf(" 2.Dequeue \n");
	printf(" 3.display all Queueu element \n");
	printf(" 4.display the top element \n");
	printf(" 5.diplay the last element \n");
	printf(" 6.quit \n");
	printf("\n Enter your choiche : ");
	scanf("%d",&ch);

	//creating cases of Queue:
	switch(ch)
	{
		case 1:
			printf("Enter the item to be pushed:\n");
			scanf("%d",&item);
			enqueue(item);
			break;
		case 2:
			item = dequeue();
			printf("Ddequeue item is %d\n",item);
			break;
		case 3:
			display();
			break;
		case 4:
			printf("Item of the top of the Queue is %d \n",peek());
			break;
		case 5:
			printf("Item of the last of the queue is %d \n",pull());
			break;
		case 6:
			exit(1);

		default:
			printf("\n Wrong Choice \n");
	}
	}

}
