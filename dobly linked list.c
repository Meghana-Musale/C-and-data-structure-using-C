#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;	
};
struct node *createList(struct node *start);
void display(struct node *start);
struct node *insertAnEmptyList(struct node *start,int ele);
struct node *insertAtBeginning(struct node *start,int ele);
void insertAtEnd(struct node *start,int ele);
void insertAfter(struct node *start,int ele,int k);
struct node *insertBefore(struct node *start,int ele,int k);
struct node *deleteNode(struct node *start,int ele);
struct node *reverseList(struct node *start);
int main()
{
	int ch,x,ele;
	struct node *start=NULL;
	start=createList(start);
	while(1)
	{
		printf("\nOperations on doubly linked list:");
		printf("\n1.Display \n2.Insert in an Empty list \n3.Insert at beginning \n4.Insert at end \n5.Insert after a specified node \n6.Insert before a specified node \n7.Delete a node \n8.Reverse a DLL \n9.Quit\n");
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		if(ch==9)
		break;
		switch(ch)
		{
			case 1:display(start);
					break;
			case 2: printf("\nEnter an ele to be inserted:");
					scanf("%d",&ele);
					start=insertAnEmptyList(start,ele);
					break;
			case 3: printf("\nEnter an ele to be inserted:");
					scanf("%d",&ele);
					start=insertAtBeginning(start,ele);
					break;
			case 4: printf("\nEnter an ele to be inserted:");
					scanf("%d",&ele);
					insertAtEnd(start,ele);
					break;
			case 5: printf("\nEnter an ele to be inserted:");
					scanf("%d",&ele);
					printf("\nEnter an ele after which insert new node:");
					scanf("%d",&x);
					insertAfter(start,ele,x);
					break;
			case 6: printf("\nEnter an ele to be inserted:");
					scanf("%d",&ele);
					printf("\nEnter an ele before which insert new node:");
					scanf("%d",&x);
					start=insertBefore(start,ele,x);
					break;
			case 7: printf("\nEnter an ele to be deleted:");
					scanf("%d",&ele);
					start=deleteNode(start,ele);
					break;
			case 8: start=reverseList(start);
					break;
			default: printf("Invalid choice");
		}
	}
return 0;
}
void display(struct node *start)//4000
{
	struct node *p;
	if(start==NULL)
	{
		printf("\nlist is Empty");
		
	}
	else
	{
	
	p=start;//4000
	printf("\nDoubly linked list ele are:\n");
	while(p!=NULL)
		{
			printf("\n%d",p->data);//40 10 50 20 30
			p=p->next;//1000 5000 2000 3000 NULL
		}
	}
}
struct node *insertAnEmptyList(struct node *start,int ele)//start=null ele=10
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=ele;//10
	temp->prev=NULL;
	temp->next=NULL;
	start=temp;
	return start;
}
struct node *insertAtBeginning(struct node *start,int ele)//start=1000 ele=40
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=ele;
	temp->prev=NULL;
	temp->next=start;
	start->prev=temp;
	start=temp;
	return start;
}
void insertAtEnd(struct node *start,int ele)//start=1000 ele=30
{
	struct node *p,*temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=ele;
	p=start;//1000
	while(p->next!=NULL)
	{
		p=p->next;	//2000
	}
	p->next=temp;//3000
	temp->next=NULL;
	temp->prev=p;
}
struct node *createList(struct node *start)// start=null
{
	int n,ele,i;
	printf("\nEnter no. of node:");
	scanf("%d",&n);//3
	if(n==0)
	return start;
	printf("\nEnter an ele to be inserted:");
	scanf("%d",&ele);//10
	start=insertAnEmptyList(start,ele);//1000
	for(i=2;i<=n;i++)//
	{
		printf("\nEnter a next ele to be inserted:");
		scanf("%d",&ele);//20
		insertAtEnd(start,ele);
	}
	return start;
}

void insertAfter(struct node *start,int ele,int x)//start=4000 50 10
{
	struct node*temp,*p;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=ele;
	p=start;//4000
	while(p!=NULL)
	{
		if(p->data==x)//1000
		{
			break;
		}
		p=p->next;//1000
	}
		if(p==NULL)
		printf("\n%d is not present in th list",x);
		else
		{
			temp->prev=p;//1000
			temp->next=p->next;
			if(p->next!=NULL)
			p->next->prev=temp;
			p->next=temp;
		}
	
}

struct node *insertBefore(struct node *start,int ele,int x)//start=1000 40 20
{
	struct node*temp,*p;
	if(start==NULL)
	printf("\ndoubly list is Empty");
	else
	{
	//if x is 1st node
	if(start->data==x)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=ele;
		temp->prev=NULL;
		temp->next=start;
		start->prev=temp;
		start=temp;
		return start;
	}
	p=start;//
	while(p!=NULL)
	{
		if(p->data==x)//20
		{
			break;
		}
		p=p->next;
	}
		if(p==NULL)//1000
		printf("\n%d is not present in th list",x);
		else
		{
			temp=(struct node *)malloc(sizeof(struct node));
			temp->data=ele;
			temp->prev=p->prev;
			temp->next=p;
			p->prev->next=temp;
			p->prev=temp;
		}

	return start;

}
}
//delete node
struct node *deleteNode(struct node *start,int k)//3000  30 2000 40 
{
	struct node *temp;
	if(start==NULL)
	{
		printf("\nList is Empty");
		return start;
	}
	//delete only node
	if(start->next==NULL)// 
	{ 
		if(start->data==k)
		{
		temp=start;
		start=NULL;
		free(temp);
	}
	
		return start;
	}
	//delete first node
	if(start->data==k)// 30 
	{
		temp=start;//3000
		start=start->next;//2000
		start->prev=NULL;//NULL
		free(temp);
		return start;//2000
	}
	temp=start->next;//2000  1000
	while(temp->next!=NULL) //2000 1000 4000
	{
		if(temp->data==k)//20 50 50  - 20 10 40 40
		break;
		temp=temp->next;//5000 1000 4000
	}
	//delete betn node 
	if(temp->next!=NULL)//TEMP=5000 4000
	{
		temp->prev->next=temp->next;//1000
		temp->next->prev=temp->prev;//2000
		free(temp);
	}
	else
	{
		//temp is pointing to last node
		
		//deleting node is last node
		if(temp->data==k)//40 40
		{
			temp->prev->next=NULL; 
			free(temp);
		}
		else
		printf("\n%d is not found in dll",k);
		
	}
		return start;
}
struct node *reverseList(struct node *start)//4000
{
	struct node *p1,*p2;
	if(start==NULL)
	return;
	p1=start;//4000
	p2=p1->next;//1000
	p1->next=NULL;//NULL
	p1->prev=p2;//1000
	while(p2!=NULL)//1000 5000 2000 3000
	{
		p2->prev=p2->next;//5000 2000 3000 NULL
		p2->next=p1;//4000 1000 5000 2000
		p1=p2;//1000 5000 2000 3000
		p2=p2->prev;//5000 2000 3000 NULL
	}
	start=p1;//3000
	return start;
}


