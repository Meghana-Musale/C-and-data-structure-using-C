//Strong Number
#include<stdio.h>
int main()
{
	int a,b,fact,i,sum=0,no;
	printf("Enter the no=");
	scanf("%d",&no);
	a=no;
	for(;a>0;)
	{
		b=a%10;
		fact=1;
		for(i=1;i<=b;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		a=a/10;
	}
	if(no==sum)
	{
		printf("Strong no...");
	}
	else
	{
		printf("Not Strong no...");
	}
}
