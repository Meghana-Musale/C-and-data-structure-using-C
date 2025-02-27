#include<stdio.h>
int main()
{
	int no,i=1;
	printf("Enter the number :");
	scanf("%d",&no);
	printf("Mul table is :\n");
	while(i<=10)
	{
		printf("%d\n",i*no);
		i++;
	}
	return 0;
}
