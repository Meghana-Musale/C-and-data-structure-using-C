#include<stdio.h>
int main()
{
	int un,pw;
	printf("Enter your UserName=");
	scanf("%d",&un);
	if(un==1234)
	{
		printf("Enter your Password=");
		scanf("%d",&pw);
		if(pw==5678)
		{
			printf("Login Successfully...");
		}
		else
		{
			printf("Password is wrong");
		}
	}
	else
	{
		printf("UserName is wrong");
	}
}
