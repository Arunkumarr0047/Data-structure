#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
node *create(int);
void display(node *head);
int main()
{
	int n;
	node *head=0;
	printf("\nHow many nodes\t");
	scanf("%d",&n);
	head=create(n);
	display(head);
}
node * create(int n)
{
	int i;
	node *head=0;
	node *newnode=0;
	node *ptr=0;
	for(i=0;i<n;i++)
	{
		newnode=(node *)malloc(sizeof(node));
		printf("\nEnter the data\t");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{
			head=newnode;
		}
		else
		{
			ptr=head;
			while(ptr->next!=0)
			{
				ptr=ptr->next;
			}
			ptr->next=newnode;
		}
		
	}
	return head;
}
void display(node *head)
{
	node *ptr=head;
	printf("\nLINKED LIST:");
	while(ptr!=0)
	{
		printf("  %d--->",ptr->data);
		ptr=ptr->next;
	}
	if(ptr == 0)
	{
		printf("X");
	}
}
