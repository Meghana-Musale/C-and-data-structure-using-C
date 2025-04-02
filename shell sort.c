//Shell Sort
#include<stdio.h>
#define MAX 100
int main()
{
	int a[MAX],i,j,temp,n,h;
	printf("Enter no of ele into an array:");
	scanf("%d",&n);
	printf("\nEnter %d array ele:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter max increment(odd value):");
	scanf("%d",&h);
	while(h>=1)
	{
		for(i=h;i<n;i++)
		{
			temp=a[i];
			for(j=i-h;j>=0&&a[j]>temp;j=j-h)
			{
				a[j+h]=a[j];
			}
			a[j+h]=temp;
		}
		h=h-2;
	}
	printf("\nSorted array ele are:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
