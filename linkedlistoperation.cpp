#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node * next;
}node;
node * create(int);
void display(node *start);
node * insert_beg(node *start);
node * insert_end(node *start);
node * insert_before(node *start);
node * insert_after(node *start);
node * delete_beg(node *start);
node * delete_end(node *start);
node * delete_node(node *start);
int main()
{
	int ch,n;
	node *start=0;
	do
	{
		printf("\n***MAIN MENU***");
		printf("\n1:create the list");
		printf("\n2:display the list");
		printf("\n3:Insert at beginning");
		printf("\n4:Insert at end");
		printf("\n5:Insert after a given node");
		printf("\n6:Insert before a given node");
		printf("\n7:Delete a node from beginning");
		printf("\n8:Delete a node from end");
		printf("\n9:Delete a given node");
		printf("\n10:EXIT");
		printf("\nEnter the option : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the number of nodes  :  ");
				scanf("%d",&n);
				start=create(n);
				break;
			case 2:
				display(start);
				break;
			case 3: start=insert_beg(start);
			break;
			case 4: start=insert_end(start);
			break;
			case 5: start=insert_before(start);
			break;
			case 6: start=insert_after(start);
			break;
			case 7:start=delete_beg(start);
			break;
			case 8:start=delete_end(start);
			break;
			case 9: start=delete_node(start);
			break;
				
		}
	}while(ch!=10);
}
	
node * create(int n)
{
	int i;
	node *start=0;
	node *newnode=0;
	node *ptr=0;
	for(i=0;i<n;i++)
	{
		newnode=(node *)malloc(sizeof(node));
		printf("\nEnter the data\t");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(start==0)
		{
			start=newnode;
		}
		else
		{
			ptr=start;
			while(ptr->next!=0)
			{
				ptr=ptr->next;
			}
			ptr->next=newnode;
		}
		
	}
	return start;
}
void display(node *start)
{
	node *ptr=start;
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
node * insert_beg(node *start)
{
	int item;
	node *newnode;
	printf("\nEnter data for nre node");
	scanf("\t%d",&item);
	newnode=(node *)malloc(sizeof(node));
	newnode->data=item;
	newnode->next=start;
	start=newnode;
	return start;
}
node * insert_end(node *start)
{
	int item;
	node *ptr;
	node *newnode;
	printf("\nEnter data for nre node");
	scanf("\t%d",&item);
	newnode->data=item;
	ptr=start;
	while(ptr->next!=0)
	{
		ptr=ptr->next;
	}
	ptr->next=newnode;
	newnode->next=0;
	return start;
}
node * insert_before(node *start)
{
	node *newnode;
	node *ptr,*preptr;
	int item,val;
	printf("\nEnter the data  :  ");
	scanf("%d",&item);
	printf("\nEnter the value after which the node is inserted  :  ");
	scanf("%d",&val);
	newnode=(node *)malloc(sizeof(node));
	newnode->data=item;
	ptr=start;
	preptr=ptr;
	while(ptr->data!=val);
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=newnode;
	newnode->next=ptr;
	return start;
}
node * insert_after(node *start)
{
	node *newnode;
	node *ptr,*preptr;
	int item,val;
	printf("\nEnter the data  :  ");
	scanf("%d",&item);
	printf("\nEnter the value after which the node is inserted  :  ");
	scanf("%d",&val);
	newnode=(node *)malloc(sizeof(node));
	newnode->data=item;
	ptr=start;
	preptr=ptr;
	while(preptr->data!=val);
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=newnode;
	newnode->next=ptr;
	return start;
}
node * delete_beg(node *start)
{
	node *ptr;
	ptr=start;
	start=start->next;
	free(ptr);
	return start;
}
node * delete_end(node *start)
{
	node *ptr,*preptr;
	ptr=start;
	while(ptr->next!=0)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=0;
	free(ptr);
	return start;
}
node * delete_node(node *start)
{
	node *ptr,*preptr,*temp;
	int val;
	printf("\nEnter the value of node to delete  :  ");
	scanf("%d",&val);
	ptr=start;
	preptr=ptr;
	while(ptr->data!=val)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	temp=ptr;
	preptr->next=ptr->next;
	free(ptr);
	return start;
}
