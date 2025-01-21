#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the 3 numbers a, b and c :");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&b>a)
	{
		printf("a is largest number");
		if(b>c)
		printf("b is largest number");
		else
		printf("c is largest number");
	}
	else 
	{
		if(a>c)
		printf("b is largest number");
		else
		printf("c is largest number");
	}
}
