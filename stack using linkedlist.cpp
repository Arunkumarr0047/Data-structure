#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node * next;
}node;
void push();
void pop();
void display();
node *start=0;
int main()
{
	int ch;
	do
	{
		printf("***MAIN MENU***");
		printf("\n1:PUSH");
		printf("\n2:POP");
		printf("\n3:DISPLAY");
		printf("\n4:EXIT");
		printf("\nEnter the choice  :  ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
		}

	}while(ch!=4);
	return 0;
}
void push()
{
	int val;
    node *newnode=(node *)malloc(sizeof(node));
    if(newnode==0)
    {
    	printf("\nNot able to push an element");
	}
	else
	{
		printf("\nEnter the value");
		scanf("  :  %d",&val);
		if(start==0)
		{
			newnode->data=val;
			newnode->next=0;
			start=newnode;
		}
		else
		{
			newnode->data=val;
			newnode->next=start;
			start=newnode;
		}
		printf("\nItem pushed");
	}
}
void pop()
{
	int item;
	node *ptr;
	if(start==0)
	{
		printf("\nUNDERFLOW");
	}
	else
	{
		item=start->data;
		ptr=start;
		start=start->next;
		free(ptr);
		printf("\nPopped element is %d",item);
	}
}
void display()
{
	int i;
	node *ptr;
	ptr=start;
	if(ptr==0)
	{
		printf("\nStack is empty");
	}
	else
	{
		printf("\n****STACK*****\n");
		while(ptr!=0)
		{
			printf("  %d\n",ptr->data);
			ptr=ptr->next;
		}
	}
}

