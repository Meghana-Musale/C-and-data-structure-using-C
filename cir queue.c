#include<stdio.h>
#include<stdlib.h>
#define Max 6
int cq[Max];
int front=-1,rear=-1;
void insert(int);
void delete();
void display();
int peek();
int isEmpty();
int isFull();

int main()
{
	int choice,k,x;
	while(1)
	{
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Peek\n5.size of cq\n6.Exit");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("\nEnter an element to be inserted into the circular queue:");
					scanf("%d",&x);
					insert(x);
					break;
			
			case 2: delete();
					break;
		
			case 3:	display();
					break;
			
			case 4: k=peek();
					printf("\nTop element of the circular queue=%d",k);
					break;
			
			case 5: k=sizeOfCQ();
					printf("\nnumber of element in circular queue=%d",k);
					break;
			
			case 6: exit(1);
		
		}
			
	}
	
	return 0;
}
void insert(int ele)
{
	if(isFull())
	{
		printf("\nCircular Queue id full or overflow");
		return;
	}
	if(rear==Max-1)
	rear=0;
	else
	{
	rear=rear+1;
	}
	cq[rear]=ele;
	
	if(front==-1)
	front=front+1;
}

void delete()
{
	int k;
	if(isEmpty())
	{
		printf("\nCircular Queue is Empty or underflow");
		return;
	}
	k=cq[front];
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		if(front==Max-1)
		front=0;
		else
		front=front+1;
		printf("\nDeleted Element:%d",k);
}
	
}

int isEmpty()
{
	if(front==-1)
	return 1;
	else
	return 0;
}
int isFull()
{
	if((front==0&&rear==Max-1)||(front==rear+1))
	return 1;
	else
	return 0;
}
void display()
{
	int i;
	if(isEmpty())
	{
		printf("\nQueue is Empty");
	}
	else
	{
		printf("\n front=%d  rear=%d",front,rear);//f=0 r=5
		printf("\nCir Queue elements are:\n");
		i=front;//i=f=0
		if(front<=rear)//0<=5
		{
			while(i<=rear)//0 1 2
			{
				printf("%d\n",cq[i]);//10 20 30...60
				i++;
			}
		}
		else
		{
		while(i<=Max-1)	
		{
			printf("%d\n",cq[i]);
			i++;
			
		}
		i=0;
		while(i<=rear)
		{
			printf("%d\n",cq[i]);
			i++;
		}
		}
	}
}
int peek()
{
	if(isEmpty())
	{
	
	printf("\ncir Queue is empty");
	return 0;
	}
	else
	{
		return cq[front];
	}
}
int sizeOfCQ()
{
	int i,count;
	if(isEmpty())
	return 0;
	if(isFull())
	return Max;
	i=front;
	if(front<=rear)
	{
		while(i<=rear)
		{
			count++;
			i++;
		}
	}
	else
	{
		while(i<=Max-1)
		{
			count++;
			i++;
		}
		i=0;
		while(i<=rear)
		{
			count++;
			i++;
		}
	}
	return count;
}
