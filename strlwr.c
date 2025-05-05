#include<stdio.h>
#include<string.h>
int main()
{
	char st[20];
	printf("Enter string:=");
	//scanf("%s",&st);
	gets(st);
	strlwr(st);      //string lower
	printf("String in lowercase=%s",st);
	return 0;
	
}
