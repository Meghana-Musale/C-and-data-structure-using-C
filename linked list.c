#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;	
};
struct node *createList(struct node *start);
void display(struct node *start);
void countNodes(struct node *start);
void search(struct node *start,int x);
struct node *insertAtBeginning(struct node *start,int data);
void insertAtEnd(struct node *start,int data);
void insertAfter(struct node *start,int data,int x);
struct node *insertBefore(struct node *start,int data,int x);
struct node *insertAtPosition(struct node *start,int data,int k);
struct node *deleteNode(struct node *start,int data);
struct node *reverseList(struct node *start);
int main()
{
	int ch,x,ele,k;
	struct node *start=NULL;
	start=createList(start);
	while(1)
	{
		printf("\nOperations on linked list:");
		printf("\n1.Display \n2. count no. of nodes \n3. Serch for an ele in a list \n4.Insert in an Empty list or Insert at beginning \n5.Insert at end \n6.Insert after a specified node \n7.Insert before a specified node \n8.Insert a node at a given position: \n9.Delete a node \n10.Reverse a DLL \n11.Quit\n");
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		if(ch==11)
		break;
		switch(ch)
		{
			case 1:display(start);
					break;
			case 2: countNodes(start);
					break;
			case 3: printf("\nEnter an ele for Search:");
					scanf("%d",&ele);
					search(start,ele);
					break;
			case 4: printf("\nEnter an ele to be inserted:");
					scanf("%d",&ele);
					start=insertAtBeginning(start,ele);
					break;
			case 5: printf("\nEnter an ele to be inserted:");
					scanf("%d",&ele);
					insertAtEnd(start,ele);
					break;
			case 6: printf("\nEnter an ele to be inserted:");
					scanf("%d",&ele);
					printf("\nEnter an ele after which insert new node:");
					scanf("%d",&x);
					insertAfter(start,ele,x);
					break;
			case 7: printf("\nEnter an ele to be inserted:");
					scanf("%d",&ele);
					printf("\nEnter an ele before which insert new node:");
					scanf("%d",&x);
					start=insertBefore(start,ele,x);
					break;
			case 8: printf("\nEnter an ele to be inserted:");
					scanf("%d",&ele);
					printf("\nEnter an ele position at which insert new node:");
					scanf("%d",&k);
					start=insertAtPosition(start,ele,k);
					break;
			case 9: printf("\nEnter an ele to be deleted:");
					scanf("%d",&ele);
					start=deleteNode(start,ele);
					break;
			case 10: start=reverseList(start);
					break;
			default: printf("Invalid choice");
		}
	}
return 0;
}
struct node *createList(struct node *start)
{
	int n,ele,i;
	printf("\nEnter no. of node:");
	scanf("%d",&n);
	if(n==0)
	return start;
	printf("\nEnter an ele to be inserted:");
	scanf("%d",&ele);//10
	start=insertAtBeginning(start,ele);
	for(i=2;i<=n;i++)//
	{
		printf("\nEnter a next ele to be inserted:");
		scanf("%d",&ele);//20
		insertAtEnd(start,ele);
	}
	return start;
}
struct node *insertAtBeginning(struct node *start,int ele)//start=null ele=10
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=ele;
	temp->link=start;
	start=temp;
	return start;
}
void insertAtEnd(struct node *start,int ele)//start=1000 ele=20
{
	struct node *p,*temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=ele;
	p=start;
	while(p->link!=NULL)
	{
		p=p->link;	
	}
	p->link=temp;
	temp->link=NULL;
}
void display(struct node *start)//start=1000
{
	struct node *p;
	if(start==NULL)
	{
		printf("\nlist is Empty");
		
	}
	else
	{
	
	p=start;//1000 4000 2000 5000 3000
	while(p!=NULL)
		{
			printf("\n%d",p->data);//10 40 20 50 30
			p=p->link;//4000 2000 5000 3000 null
		}
	}
}
void countNodes(struct node *start)//start=1000
{
	int n=0;
	struct  node *p;
	if(start==NULL)
	printf("\nList is empty");
	else
	{
		p=start;//1000 4000 2000 5000 3000
		while(p!=NULL)
		{
			n++;//n=1 2 3 4 5
			printf("\n%d",p->data);//10 40 20 50 30
			p=p->link;//4000 2000 5000 3000 null
		}
	
	}
		printf("\nNo. of nodes=%d",n);
}
void search(struct node *start,int x)//start=1000 ele=40
{
	struct node *p=start;//1000
	int pos=1;
	while(p!=NULL)
	{
		if(p->data==x)//10 40
		{
			printf("\nElement %d is found at pos - %d",x,pos);
			return;
		}
		p=p->link;//4000
		pos++;//2
	}
	printf("\nEle %d not found",x);
}
struct node *reverseList(struct node *start)//start=1000
{
	struct node *prev,*p,*next;
	prev=NULL;
	p=start;//1000
	while(p!=NULL)//1000 4000 2000
	{
		next=p->link;//next= 4000 2000 5000
		p->link=prev;//p->link=null 1000  4000
		prev=p;//1000 4000 2000
		p=next;//p=4000 2000 5000
	}
	start=prev;
	return start;
}
void insertAfter(struct node *start,int ele,int x)//start=1000 30 20
{
	struct node*temp,*p;
	p=start;
	while(p!=NULL)
	{
		if(p->data==x)
		{
			break;
		}
		p=p->link;
		if(p==NULL)
		printf("\n%d is not present in th list",x);
		else
		{
			temp=(struct node *)malloc(sizeof(struct node));
			temp->data=ele;
			temp->link=p->link;
			p->link=temp;
		}
	}
}

struct node *insertBefore(struct node *start,int ele,int x)//start=1000 40 20
{
	struct node*temp,*p;
	if(start==NULL)
	printf("\nlist is Empty");
	else
	{
	//if x is 1st node
	if(x==start->data)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=ele;
		temp->link=start;
		start=temp;
		return start;
	}
	p=start;//1000
	while(p->link!=NULL)
	{
		if(p->link->data==x)//20
		{
			break;
		}
		p=p->link;
	}
		if(p->link==NULL)//1000
		printf("\n%d is not present in th list",x);
		else
		{
			temp=(struct node *)malloc(sizeof(struct node));
			temp->data=ele;
			temp->link=p->link;
			p->link=temp;
		}

	return start;
}
}
struct node *insertAtPosition(struct node *start,int ele,int k)//start=1000 ele=50 k=4
{
	struct node*temp,*p;
	int i;
	if(k==1)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=ele;
		temp->link=start;
		start=temp;
		return start;
	}
	p=start;//p=1000
	//find a pointer to k-1 node
	for(i=1;i<k-1&&p!=NULL;i++)//1 2  3 3
	{
		p=p->link;//p=4000 2000
	}
	if(p==NULL)
	printf("\nWe can insert only upto %d position:",i);
	else
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=ele;
		temp->link=p->link;
		p->link=temp;
		
	}
	return start;
}
//delete node
struct node *deleteNode(struct node *start,int x)//3000 50
{
	struct node *temp,*p;
	if(start==NULL)
	{
		printf("\nList is Empty");
	}
	//delete 1st node
	if(start->data==x)//30==50
	{
		temp=start;
		start=start->link;
		free(temp);
		return start;
	}
	//delete betn node or delete at the end
	p=start;//3000
	while(p->link!=NULL)//3000
	{
		if(p->link->data=x)//50==50
		{
			break;
		}
		p=p->link;
	}
	if(p->link==NULL)
	{
		printf("\n%d ele is not int the list",x);
	}
		else
		{
			temp=p->link;//5000
			p->link=temp->link;
			free(temp);
		}
	
		return start;
}
