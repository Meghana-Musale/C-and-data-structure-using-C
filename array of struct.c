#include<stdio.h>
struct student
{
	int rn;
	char nm[20];
	char div;
};
int main()
{
	struct student s[5];
	int i;
	printf("Enter values=");
	
	for(i=0;i<5;i++)
	{
	scanf("%d %s %c",&s[i].rn,&s[i].nm,&s[i].div);	
	}
	for(i=0;i<5;i++)
	{
		printf("Rollno=%d,Name=%s,Div=%c",s[i].rn,s[i].nm,s[i].div);
		
	}
	return 0;
}
