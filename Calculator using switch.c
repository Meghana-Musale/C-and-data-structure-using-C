#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two no=");
	scanf("%d%d",&a,&b);
	printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
	printf("\nEnter Choice=");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
		printf("Add=%d",a+b);
		break;
		case 2:
		printf("Sub=%d",a-b);
		break;
		case 3:
		printf("Multi=%d",a*b);
		break;
		case 4:
		printf("Div=%d",a/b);
		break;
		default:
	printf("Choice is worng");
	}
}
