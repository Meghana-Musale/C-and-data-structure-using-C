#include<stdio.h>
int main()
{
	int a,u,unit=7,Total;
	char ch[25];
	printf("\n Enter the customer name : ");
	scanf("%s",&ch);
	printf("\n Enter the customer ID : ");
	scanf("%d",&a);
	printf("\n How much light unit is used ?: ");
	scanf("%d",&u);
	printf("\n 1 Unit :7 Rs\n");
	Total=u*unit;
	printf("\n Total Bill Rs : %d",Total);
	printf("\n\n\na==============LIGHTBILL==============\n");
	printf("\n\n Name : %s \n Customer ID : %d \n Unit : %d \n Total Bill Rs : %d",ch,a,u,Total);
}

