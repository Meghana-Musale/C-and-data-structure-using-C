//Selection Sort
#include<stdio.h>
#define MAX 100
int main()
{
	int a[MAX],i,j,n,temp,minindex;
	printf("Enter no of ele into an array:");
	scanf("%d",&n);
	printf("\nEnter %d array ele:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
 	{
		minindex=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[minindex])
			minindex=j;
		}
		if(i!=minindex)
		{
			temp=a[i];
			a[i]=a[minindex];
			a[minindex]=temp;
		}
	}
	printf("\nSorted array ele are:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
