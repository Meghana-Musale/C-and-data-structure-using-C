//Insertion Sort
#include<stdio.h>
#define MAX 100
int main()
{
	int a[MAX],i,j,n,temp;
	printf("\nEnter no. of ele into an array:");
	scanf("%d",&n);
	printf("\nEnter %d array Elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0&&a[j]>temp;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
	printf("\nSorted array elements are:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
