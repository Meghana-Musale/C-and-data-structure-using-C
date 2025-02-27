#include<stdio.h>
#include<stdlib.h>
#define Max 6
int deque_arr[Max];
int front=-1;
int rear=-1;
void insert_frontEnd(int item);
void insert_rearEnd(int item);
int delete_frontEnd();
int delete_rearEnd();
void display();
int isEmpty();
int isFull();
int main()
{
	int ch,item;
	while(1)
	{
		printf("\n1.Insert at the front end");
		printf("\n2.Insert at the rear end");
		printf("\n3.Delete from front end");
		printf("\n4.Delete from rear end");
		printf("\n5.Display");
		printf("\n6.Quit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\nEnter an element:");
				scanf("%d",&item);
				insert_frontEnd(item);
				break;
			
			case 2: printf("\nEnter an element:");
				scanf("%d",&item);
				insert_rearEnd(item);
				break;
			case 3: printf("\nElement deleted from front end %d",delete_frontEnd());
					break;
		
			case 4: printf("\nElement deleted from rear end %d",delete_rearEnd());
					break;
			
			case 5: display();
					break;
			case 6: exit(1);
			default: printf("\nInvalid choice");
				
		}
		printf("\nfront=%d rear=%d",front,rear);
	}
}
void insert_frontEnd(int item)//10 40 f=4 r=3
{
	if(isFull())
	printf("\nQueue is full");
	else
	{
		//queue is empty
		if(front==-1)
		{
			front=0;
			rear=0;
		}
		else if(front==0)//f=5
		front=Max-1;
		else
		front=front-1; //4 
		deque_arr[front]=item;
	}
}
void insert_rearEnd(int item)//20 30 r=2
{
	if(isFull())
	{
	
	printf("\nQueue overflow");
	}
	else
	{
	if(front==-1)
	{
		front=0;
		rear=0;
	}
	else if(rear==Max-1)
	rear=0;
	else
	rear=rear+1;
	deque_arr[rear]=item;
	}
}
int delete_frontEnd()
{
	int item;
	if(isEmpty())
	{
		printf("\nQueue Underflow");
		exit(1);
	}
	item=deque_arr[front];
	if(front==rear)//queue has only ele
	{
		front=-1;
		rear=-1;
	}
	else
	if(front==Max-1)//f
	front=0;
	else
	front=front+1;
	return item;
	
}
int delete_rearEnd()
{
	int item;
	if(isEmpty())
	{
	printf("\nQueue Underflow");
	exit(1);
}
item=deque_arr[rear];
if(front==rear)
{
	front=-1;
	rear=-1;
}
else if(rear==0)
rear=Max-1;
else
rear=rear-1;
 return item;
}
int isFull()
{
	if((front==0 && rear==Max-1)||(front==rear+1))
	return 1;
	else
	return 0;
}
int isEmpty()
{
	if(front==-1)
	return 1;
	else
	return 0;
}
void display()
{
	int i;
	if(isEmpty())
	{
		printf("\nQueue is empty");
		return;
	}
	printf("\nQueue Element\n");
	i=front;//f=4   r=3
	if(front<=rear)
	{
		while(i<=rear)
		printf("%d ",deque_arr[i++]);
	}
	else
	{
		while(i<=Max-1)//4 5
		printf("%d ",deque_arr[i++]);//50 40
		i=0;
		while(i<=rear)// 3
		printf("%d ",deque_arr[i++]);//10 20 30 60
		
	}
	printf("\n");
}
