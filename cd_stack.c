 #include<stdio.h>
#include<stdlib.h>
#define max 10
int stack[max];
int top =-1;

int push(int item)
{
    if(isfull())
        printf("Stack is over flow:\n");
    else
        stack[++top] = item;
}

int pop()
{
    int item;
    if (isempty())
        printf("Stack is under flow:\n");
    else
        item = stack[top--];
    return item;
}

int isfull()
{
    if(top == max-1)
        return 1;
    else
        return 0;
}

int isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
int peek()
{
    if (isempty())
        printf("Stack is Empty\n");
    else
        return stack[top];
}

int display()
{
    if (isempty())
        printf("Stack is Empty \n");
    else
        {
            int i;
            for(i=top;i>=0;i--)
            {
                printf("%d\n",stack[i]);
            }
            printf("\n");
        }
}


int main()
{
    int ch,item;
    while(1)
	{
	printf("\n 1.Push \n");
	printf(" 2.pop \n");
	printf(" 3.display all stack element \n");
	printf(" 4.display the top element \n");
	printf(" 5.quit \n");
	printf("\n Enter your choiche : ");
	scanf("%d",&ch);

	//creating cases of stack:
	switch(ch)
	{
		case 1:
			printf("Enter the item to be pushed:\n");
			scanf("%d",&item);
			push(item);
			break;
		case 2:
			item = pop();
			printf("pop item is %d\n",item);
			break;
		case 3:
			display();
			break;
		case 4:
			printf("Item of the top of the stack is %d \n",peek());
			break;
		case 5:
			exit(1);

		default:
			printf("\n Wrong Choice \n");
	}
	}
	return 0;
}
