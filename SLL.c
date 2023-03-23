#include<stdio.h>

struct node 
{
	int data;
	struct node *link;
};

void printList(struct node *n)
{
	while(n!=NULL)
	{
		printf("%d -> ",n->data);
		n=n->link;	
	}	
}


void main()
{
		struct node * head =NULL;
		struct node * second = NULL;
		struct node * third = NULL;
		
		head = (struct node *)malloc(sizeof(struct node));
		second = (struct node *)malloc(sizeof(struct node));
		third = (struct node *)malloc(sizeof(struct node));
		
		head->data = 5;
		head->link = second;
		
		second->data = 6;
		second->link = third;
		
		third->data = 7;
		third->link = NULL;
		
		printList(head);
}
