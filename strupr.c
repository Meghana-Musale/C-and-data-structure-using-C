#include<stdio.h>
#include<string.h>
int main()
{
	char st[20];
	printf("Enter string:=");
	//scanf("%s",&st);
	gets(st);
	strupr(st);      //string upper
	printf("String in uppercase=%s",st);
	return 0;
	
}
