//sorting of array
#include<stdio.h>
int main()
{
	int i,j,a[5],temp;
	printf("Enter the Elements of an array :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Sorting :");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
		
	}
}
