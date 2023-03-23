#include<stdio.h>
#define max 50
int q[max];
int f = -1;
int r = -1;

void enqueue(int item)
{
	if (isfull())
	{
		printf("Queue is over flow:\n");
		return;
	}
	else
	{
		if(f == -1)
		{
		   f=f+1;
		   q[++r] = item;
		}
		else
            q[++r] = item;
	}
}

//pop function
int dequeue()
{
	int item;
	if(isempty())
	{
		printf("Queue is in Underflow :\n");
	}
	else
	{
		item = q[f++];
	}
	return item;
}

//Display funtion
int display()
{
	if (isempty())
	{
		printf("Queue is Empty :\n");
	}
	else
	{
		int i;
		printf("Display Queue element are :\n");
		for(i=r;i>=f;i--)
		{
			printf("%d\n",q[i]);
		}
		printf("\n");
	}
}

//Check if stack is full or what:
int isfull()
{
	if(r == max-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


//check if stack is rmpty or what:
int isempty()
{
	if (f == -1 )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


//peek the top element from stack:
int peek()
{
	if(isempty())
	{
		printf("Queue is empty:\n");
	}
	else
	{
		return q[r];
	}
}

int main()
{
      int ch,item;
    while(1)
    {
        printf("\n******* 1.enqueue **** 2.Dequeue **** 3.PEEk **** 4.DISPLAY **** 5.EXIT ********\n");
        printf("Enter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter the Value You want to push inside the stack:\n");
                scanf("%d",&item);
                enqueue(item);
                break;
            case 2:
                printf("POP value is = %d",dequeue());
                break;
            case 3:
                peek();
                break;
            case 4:
               display();
               break;
            case 5:
                exit(1);
            default:
                printf("Enter choice is wrong:\n");

        }

    }
}
