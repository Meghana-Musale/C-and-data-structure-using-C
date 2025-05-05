#include<stdio.h>
#include<string.h>
int main()
{
	char st[20];
	printf("Enter string");
	gets(st);
	strrev(st);
	printf("String in reverse=%s",st );

return 0;
}
