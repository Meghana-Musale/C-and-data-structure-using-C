#include<stdio.h>
#include<string.h>
int main()
{
	char st[20],nw[20];
	printf("Enter 1st string :");
	gets(st);
	printf("Enter 2nd string :");
	gets(nw);
	strcat(st,nw);
	printf("String after concatnation= %s",st);

return 0;
}
