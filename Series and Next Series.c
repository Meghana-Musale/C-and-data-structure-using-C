#include<stdio.h>
int main()
{
	int no,a=1,i;
	printf("Enter the no=");
	scanf("%d",&no);
	while(a<=2)
	{
		i=1;
		while(i<=10)
		{
			printf("\n%d",i*no);
			i++;
		}
		a++;
		no++;
	}
}
