//addition of 2 array
#include<stdio.h>
int main()
{
	int i,a[4]={1,2,3,4},b[4]={1,2,3,4};
	printf("Elements of first array :");
	for(i=0;i<4;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("Elements of second array :");
	for(i=0;i<4;i++)
	{
		printf("%d\n",b[i]);
	}
	printf("Addition of 2 array :");
	for(i=0;i<4;i++)
	{
		printf("%d\n",a[i]+b[i]);
	}
}
