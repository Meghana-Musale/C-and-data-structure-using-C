#include<stdio.h>                                     
#include<stdlib.h>
#define Max 6
int sarr[Max];
int top=-1;
void push(int x);
int pop();
void display();
int peek();
int isEmpty();
int isFull();

int main()
{
	int choice,x,k;
	while(1)
	{
		printf("\n1.push\n2.pop\n3.Display\n4.Display top element\n5.Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					printf("\nEnter Element");
					scanf("%d",&x);
					push(x);
					break;
			case 2: k=pop();
					printf("The popped element is :%d",k);
					break;
			case 3: display();
					break;
			case 4:	k=peek();
					printf("\nTop Element is :%d",k);
					break;
			case 5: exit(1);
            
			default: printf("Invalid choice..");		
		}
	}
	return 0;
}
int isFull()
{
	if(top==Max-1)
	return 1;
	else
	return 0;
}
int isEmpty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}
void push(int x)
{
	if(isFull())
	printf("stack is Full");
	else
	{
		top=top+1;
		sarr[top]=x;
	}
}
int pop()
{
	int ele;
	if(isEmpty())
	printf("Stack is Empty");
	else
	{
		ele=sarr[top];
		top=top-1;
	}
}
void display()
{
	int i;
	if(isEmpty())
	printf("Stack is Empty");
	else
	{
		printf("The stack elements are :\n");
		for(i=top;i>=0;i--)
		printf("\n%d",sarr[i]);
	}
}
int peek()
{
	if(isEmpty)
	printf("Stack is Empty");
	return sarr[top];
}


