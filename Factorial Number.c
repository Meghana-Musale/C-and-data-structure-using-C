//Factorial Number
#include<stdio.h>
int main()
{
	int fact=1,i,no;
	printf("Enter the no=");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	printf("Factorial=%d",fact);
}
