#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
}*front=NULL,*rear=NULL;
void insert(int item);
int delete();
int peek();
void display();
int isEmpty();
int main()
{
	int choice,item,k;
	while(1)
	{
		printf("\n1.Insert \n2.Delete \n3.Display First element \n4.Display All elements \n5.Exit");
		printf("Enter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
		
		case 1: printf("\nEnter an ele to insert:");
				scanf("%d",&item);
				insert(item);
				break;
		case 2: k=delete();
				printf("\nDeleted ele:%d",k);
				break;
		case 3: display();
				break;
		case 4: k=peek();
				printf("\nElement at front of Queue : %d",k);
				break;
		case 5: exit(1);
		default: printf("\nInvalid choice");
	}
}
	return 0;
}
void insert(int ele)
{
	struct node *temp;
	temp=(struct node*) malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("\nSufficient memory is not availablein Heap");
		return;
	}
	temp->data=ele;
	temp->link=NULL;
	if(front==NULL)
	front=temp;
	else
	rear->link=temp;
	rear=temp;
}
int delete()
{
	struct node *temp;
	int k;
	if(isEmpty())
	{
		printf("\nQueue is Empty or underflow");
		exit(1);
	}
	temp=front;
	k=temp->data;
	front=front->link;
	free(temp);
	return k;
}
void display()
{
	struct node *p;
	p=front;
	if(isEmpty())
	{
		printf("\nQueue is Empty or underflow");
		return;
	}
	printf("\nQueue elements are :");
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->link;
	}
}
int isEmpty()
{
	if(front==NULL)
	return 1;
	else
	return 0;
}
int peek()
{
	if(front==NULL)
	{
		printf("\nQueue is Empty or underflow");
		exit(1);
	}
	return front->data;
}





