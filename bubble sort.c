//Bubble Sort
#include<stdio.h>
#define MAX 100
int main()
{
	int a[MAX],i,x,j,temp,n,swaps;
	printf("Enter no of ele into an array:");
	scanf("%d",&n);
	printf("\nEnter %d array ele:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(x=n-2;x>=0;x--)
	{
		swaps=0; 
		for(j=0;j<=x;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1]; 
				a[j+1]=temp;
				swaps++;
			}
		}
		if(swaps==0)
		break;
	}
	printf("\nSorted array ele are:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
