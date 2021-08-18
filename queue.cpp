#include<stdio.h>
#define max 10
int queue[max],front=-1,rear=-1;
int insert();
int qdelete();
int display();
int main()
{
	int ch;
	do
	{
	printf("\n***MAIN MENU***");
	printf("\n1:Insert");
	printf("\n2:Delete");
	printf("\n3:Display");
	printf("\n4:Exit");
	printf("\nEnter the choice\t");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			insert();
			break;
		case 2:
			qdelete();
			break;
		case 3:
			display();
			break;
      }
  }while(ch!=4);
  return 0;
}
int insert()
{
	int value;
	if(rear==max-1)
	{
		printf("\nOVERFLOW");
	}
	else
	{
		printf("\nENTER THE ELMENT TO INSERT\t");
		scanf("%d",&value);
		if(front==-1 && rear==-1)
		{
			front=0;
			rear=0;
		}
		else
		{
		rear=rear+1;
		}
		queue[rear]=value;
	}return 0;
}
int qdelete()
{
	int val;
	if(front==-1 || front>rear)
	{
		printf("\nUNDERFLOW");
	}
	else
	{
		val=queue[front];
		front=front+1;
		printf("\nDEleted element is %d",val);
	}return 0;
}
int display()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("\nThe queue is empty");
	}
	else
	{
		printf("\n***QUEUE***");
		for(i=front;i<=rear;i++)
		{
			printf("\n%d",queue[i]);
		}
		
	}return 0;
}

