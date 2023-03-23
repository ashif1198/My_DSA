#include<stdio.h>
#define max 5
#include<stdlib.h>
int Q[max];
int front = -1;
int rear = -1;

int enqueue(int item)
{
    if(isfull())
    {
        printf("Queue is overflow:\n");
    }
    else{
        if(front = -1)
            front=0;
        rear = (rear+1)% max;
        Q[rear] = item;
        printf("Inserted item --> %d",item);
        }
}

int dequeue()
{
    int item;
    if(isempty())
        printf("Queue is Underflow:\n");
    else
        {
        item = Q[front];
        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
            front = (front + 1) % max;
    }
    return item;
}
int peek()
{
    if (isempty())
        printf("QUEUE is Empty:\n");
    else
    {
        return Q[rear];
    }
}

int isfull()
{
	if((front == rear + 1) || (front == 0 && rear == max - 1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isempty()
{
  if(front == -1)
    return 1;
  else
    return 0;
}

int display()
{
    int i;
    if(isempty())
        printf("Queue is Empty:\n");
    else
    {
         printf("\n Front -> %d ", Q[front]);
         printf("\nItems -> ");
         for(i=front ; i != rear ; i = (i + 1)% max )
         {
          printf("%d ",Q[i]);
         }
         printf("%d ", Q[i]);
    printf("\n Rear -> %d \n", Q[rear]);
    }
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
	printf(" 5.quit \n");
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
			printf("pop item is %d\n",item);
			break;
		case 3:
			display();
			break;
		case 4:
			printf("Item of the top of the Queue is %d \n",peek());
			break;
		case 5:
			exit(1);

		default:
			printf("\n Wrong Choice \n");
	}
	}

}
