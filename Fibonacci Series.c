//Fibonacci Series
#include<stdio.h>
int main()
{
	int a=0,b=1,c,i;
	for(i=1;i<=10;i++)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
	}
}

