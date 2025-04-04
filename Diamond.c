#include<stdio.h>
int main()
{
	int a=1,b,c,i=1,j,k;
	do
	{
		c=5;
		do
		{
			printf(" ");
			c--;
		}while(c>=a);
		
		b=1;
		do	
		{
			printf(" *");
			b++;
		}while(b<=a);
		
		printf("\n");
		a++;
	
	}while(a<=5);
	
	do
	{
		j=1;
		do
		{
			printf(" ");
			j++;
		}while(j<=i);
		k=5;
		do
		{
			printf(" *");
			k--;
		}while(k>=i);
	
		printf("\n");
		i++;
	
	}while(i<=5);
}
