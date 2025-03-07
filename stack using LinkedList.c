#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;	
};
struct node *top=NULL;
void push(int item);
int pop();
void display();
int peek();
int isEmpty();
int main()
{
	int choice,item,k;
	while(1)
	{
		printf("\n1.Insert \n2.delete\n3.display \n4.top ele \n5.exit\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
		
		case 1: printf("\nEnter an ele to insert:");
				scanf("%d",&item);
				push(item);
				break;
		case 2: k=pop();
				printf("\nPopped ele:%d",k);
				break;
		case 3: display();
				break;
		case 4: k=peek();
				printf("\nTop Ele=%d",k);
				break;
		case 5: exit(1);
		default: printf("\nInvalid choice");
	}
	}
	return 0;
}
void push(int ele)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("\nStack is overflow");
		return;
	}
	temp->data=ele;
	temp->link=top;
	top=temp;
}
int pop()
{
	struct node *temp;
	int x;
	if(isEmpty())
	{
		printf("\nStack is Empty or underflow");
		exit(1);
		
	}
	temp=top;
	x=temp->data;
	top=top->link;
	free(temp);
	return x;
}
void display()
{
	struct node *p;
	p=top;
	if(isEmpty())
	{
		printf("\nStack is Empty");
		return;
	}
	printf("\nStack elements are:\n");
	while(p!=NULL)
	{
		printf("\n%d",p->data);
		p=p->link;
	}
}
int isEmpty()
{
	if(top==NULL)
	return 1;
	else
	return 0;
}
int peek()
{
	if(isEmpty())
	{
		printf("\nStack is empty or underflow");
		exit(1);
	}
	return top->data;
}

