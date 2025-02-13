#include<stdio.h>                                     
#include<stdlib.h>
#define Max 6
int q[Max];
int front=-1,rear=-1;
void insert(int);
void delete();
void display();
int peek();
int isEmpty();
int isFull();

int main()
{
	int choice,x,k=0;
	while(1)
	{
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Peek\n5.Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	printf("\nEnter Element");//10 20 30
				scanf("%d",&x);
				insert(x);
				break;
			case 2:	delete();
				//printf("\nDeleted Element:%d",k);
				break;
			
			case 3:display();
				break;
			case 4:	k=peek();
				printf("\nTop Element: %d",k);
				break;
			case 5: exit(1);
		}
	}
	return 0;
}

void insert(int ele)//10 20 30
{
	if(isFull())
	{
	printf("\nQueue is Full");
	}
	else
	{
		rear=rear+1;//0 1 2
		q[rear]=ele;
		if(front==-1)//0
		front=front+1;
	}
}
void delete()
{
	int k;
	if(isEmpty())
	{
		printf("\nQueue is empty");
	//return 0;
	}
	else{
		k=q[front];//10 front=0 20 f=1 30 f=2
		if(front==rear) //0 2 1 2 2 2
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=front+1;//1 2
		}
		printf("\nDeleted Element:%d",k);//10 20 30
		//return k;
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
	if(rear==Max-1)
	return 1;
	else
	return 0;
}
void display()//f=0 r=2
{
	int i;
	if(isEmpty())
	printf("Queue is Empty");
	else
	{
		for(i=front;i<=rear;i++)//i=0<=2 1 2
		printf("\n%d",q[i]);//10 20 30
	}
}
int peek()
{
	if(isEmpty())
	{
	printf("\nQueue is Empty");
	return 0;
	}
	return q[front];
}
