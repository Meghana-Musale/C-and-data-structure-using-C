#include<stdio.h>
int main()
{
	int a,b,c=0,d;
	printf("Enter the no :");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	while(c>0)
	{
		d=c%10;
		switch(d)
		{
			case 1:printf("one");
			break;
			case 2:printf("Two");
			break;
			case 3:printf("Three");
			break;
			case 4:printf("four");
			break;
			case 5:printf("Five");
			break;
			case 6:printf("Six");
			break;
			case 7:printf("Seven");
			break;
			case 8:printf("Eight");	
			break;
			case 9:printf("Nine");
			break;
			case 0:printf("Zero");
			break;
		}
		c=c/10;
	}
}

