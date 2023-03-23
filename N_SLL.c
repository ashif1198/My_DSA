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
		struct node *fnode,*tmp;
		int i,n,num;
		printf("\n Enter how many no. of node u want to create :");
		scanf("%d",&n);
		
		head = (struct node *)malloc(sizeof(struct node));
		
		printf("Enter the 1st data:");
		scanf("%d",&num);
		
		head->data = num;
		head->link = NULL;
		tmp = head;
		
		for(i=2;i<=n;i++)
		{
			fnode =  (struct node *)malloc(sizeof(struct node));
			if(fnode==NULL)
			{
				printf("Memory can't be allocated :\n");
				break;
			}
			else
			{
				printf("Enter the value of the new nodee :");
				scanf("%d",&num);
				
				fnode->data = num;
				fnode->link = NULL;
				tmp->link = fnode;
				tmp = fnode;
			}
		}
		
		printList(head);
}
