#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *createList(struct node *last);
struct node *insertAnEmptyList(struct node *last,int ele);
void display(struct node *last);
struct node *insertAtBeginning(struct node *last,int ele);
struct node *insertAfter(struct node *last,int ele,int k);
struct node *deleteNode(struct node *last,int ele);
struct node *insertAtEnd(struct node *last,int ele);
int main()
{
	int ch,k,ele;
	struct node *last=NULL;
	last=createList(last);
	while(1)
	{
		printf("\nOperations on cir linked list:");
		printf("\n1.Display \n2.Insert in an Empty list \n3.Insert at beginning \n4.Insert at end \n5.Insert after a specified node \n6.Delete a node  \n7.Quit\n");
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		if(ch==7)
		break;
		switch(ch)
		{
			case 1:display(last);
					break;
			case 2: printf("\nEnter an ele to be inserted:");
					scanf("%d",&ele);
					last=insertAnEmptyList(last,ele);
					break;
			case 3: printf("\nEnter an ele to be inserted:");
					scanf("%d",&ele);
					last=insertAtBeginning(last,ele);
					break;
			case 4: printf("\nEnter an ele to be inserted:");
					scanf("%d",&ele);
					last=insertAtEnd(last,ele);
					break;
			case 5: printf("\nEnter an ele to be inserted:");
					scanf("%d",&ele);
					printf("\nEnter an ele after which insert new node:");
					scanf("%d",&k);
					last=insertAfter(last,ele,k);
					break;
			case 6: printf("\nEnter an ele to be deleted:");
					scanf("%d",&k);
					last=deleteNode(last,k);
					break;
			default: printf("Invalid choice");
		}
	}
return 0;
}
void display(struct node *last)//last=3000
{
	struct node *p;
	if(last==NULL)
	{
		printf("\nlist is Empty");
		
	}
	else
	{
	
	p=last->link;//1000
	printf("\nDoubly linked list ele are:\n");
	do
	{
			printf("\n%d",p->data);//10 20 40 30
			p=p->link;//2000 4000 3000 1000
		}	while(p!=last->link);

	}
}

struct node *insertAnEmptyList(struct node *last,int ele)//10 last null
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=ele;//10
	last=temp;
	last->link=last;
	
	return last;
}
struct node *insertAtBeginning(struct node *last,int ele)//
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=ele;
	temp->link=last->link;
	last->link=temp;
	return last;
}
struct node *insertAtEnd(struct node *last,int ele)//last=2000 ele=30

{
	struct node *p,*temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=ele;
	temp->link=last->link;
	last->link=temp;
	last=temp;
	return last;
	
}
struct node *createList(struct node *last)//last=1000 
{
	int n,x,i;
	printf("\nEnter no. of node:");
	scanf("%d",&n);//3
	last=NULL;
	if(n==0)
	return last;
	printf("\nEnter an ele to be inserted:");
	scanf("%d",&x);//
	last=insertAnEmptyList(last,x);//1000
	for(i=2;i<=n;i++)//
	{
		printf("\nEnter a next ele to be inserted:");
		scanf("%d",&x);//20
		last=insertAtEnd(last,x);
		
	}
	return last;
}

struct node *insertAfter(struct node *last,int ele,int x)//last=3000 40 20
{
	struct node*temp,*p;
	p=last->link;//1000 2000
	do{
		if(p->data==x)//
		{
			break;
		}
		p=p->link;//2000
	}while(p!=last->link);

		if(p==last->link && p->data!=x)
		printf("\n%d is not present in th list",x);
		else
		{
				temp=(struct node *)malloc(sizeof(struct node));
				temp->data=ele;//40
			temp->link=p->link;//3000
			p->link=temp;//4000
			if(p==last)
			last=temp;
		}
		return last;
}
//delete node
struct node *deleteNode(struct node *last,int k)// 4000 k=40
{
	struct node *temp,*p;
	if(last==NULL)	
	{
		printf("\nList is Empty");
		return;
	}
	//delete only node
	if(last->link==last && last->data==k)// 
	{ 
		temp=last;//4000
		last=NULL;//null
		free(temp);
		return last;
	}
	//delete first node
	if(last->link->data==k)// 10=10
	{
		temp=last->link;//1000
		last->link=temp->link;
		free(temp);
		return last;//
	}
	p=last->link;//4000
	while(p->link!=last) //
	{
		if(p->link->data==k)//30=30
		break;
		p=p->link;//
	}
	//delete betn node 
	if(p->link!=last)//
	{
	temp=p->link;//2000
	p->link=temp->link;
		free(temp);
		return last;
	}
	else
	{
		//deleting node is last node
		if(last->data==k)//30=30
		{
			temp=last;//3000
			 p->link=last->link; //4000
			 last=p;//4000
			free(temp);
			return last;//4000
		}
		else
		printf("\n%d is not found in  cir sll",k);
		
	}
}

