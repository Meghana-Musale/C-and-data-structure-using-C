//Goto function
//Addition
#include<stdio.h>
int main()
{
	int a,b,c;
	s:
		printf("Enter any Two numbers :");
		scanf("%d%d",&a,&b);
		printf("Addition : %d",a+b);
		printf("\ncontinue[1] or break[any keys]")	;
		scanf("%d",&c);
		if(c==1)
		{
			goto s;
		}
		else
		{
			printf("Addition is stop..");
		}
}
