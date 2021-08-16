#include<stdio.h>
#define max 5
int stack[max],top=-1;
int push();
int pop();
int peek();
int display();
int main(void)
{
	int ch;
	do
	{
	printf("\n*****MAIN MENU*****");
	printf("\n1:push");
	printf("\n2:pop");
	printf("\n3:peek");
	printf("\n4:display");
	printf("\n5:exit");
	printf("\nEnter your choice\t");
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
			peek();
			break;
		case 4:
			display();
			break;
	}
			
	}while(ch!=5);
	return 0;
}
	int push()
	{
		int val;
		if(top==max-1)
		{
			printf("\nOVERFLOW");
		}
		else
		{
			printf("\nEnter the value to be pushed\t");
			scanf("%d",&val);
			top=top+1;
			stack[top]=val;
		}
		return 0;
	}
	int pop()
	{
		int value;
		if(top==-1)
		{
			printf("underflow");
		}
		else{
			value=stack[top];
			top=top-1;
			printf("\npopped element is \t %d",value);
		}
		return 0;
	}
	int peek()
	{
		if(top==-1)
		{
			printf("\nstack is empty");
		}
		else
		{
			printf("\ntop element is %d",stack[top]);
		}
		return 0;
	}
	int display()
	{
		int i;
		printf("\n*****STACK*****\n");
		for(i=0;i<=max-1;i++)
		{
			printf("%d\t",stack[i]);
		}
		return 0;
	}
