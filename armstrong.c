#include<stdio.h>
int main()
{
	int a,b,c=0,no;
	printf("Enter the no=");
	scanf("%d",&no);
	a=no;
	while(a>0)
	{
		b=a%10;
		c=c+b*b*b;
		a=a/10;
	}
	if(c==no)
	{
		printf("Number is Armstrong...");
	}
	else
	{
		printf("Number is not Amstrong...");
	}
}
