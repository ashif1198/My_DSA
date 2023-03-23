#include<stdio.h>
#define max 50
int stack[max];
int top =-1;

int push(int item)
{
    if(isfull())
        printf("Stack is over full:\n");
    else{
        stack[++top] = item;
    }
}
int isfull()
{
    if(top == max - 1)
        return 1;
    else
        return 0;
}
int pop()
{
    int item;
    if(isempty())
        printf("Stack is underflow:\n");
    else
    {
        item = stack[top--];
    }
    return item;
}

int isempty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}

int display()
{
    int i;
    if(isempty())
        printf("Stack is underflow:\n");
    else
        printf("\n****** STACK ******\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
}

int peek()
{
    if(isempty())
        printf("Stack is underflow:\n");
    else
        printf("Top element of the stack = %d",stack[top]);
}

int main()
{
    int ch,item;
    while(1)
    {
        printf("\n******* 1.PUSH **** 2.POP **** 3.PEEk **** 4.DISPLAY **** 5.EXIT ********\n");
        printf("Enter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter the Value You want to push inside the stack:\n");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                printf("POP value is = %d",pop());
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
