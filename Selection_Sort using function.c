#include<stdio.h>
int selection_sort(int arr[],int size);
int main()
{
	int n;
	printf("Enter the no.of elements: ");
	scanf("%d",&n);
	
	int arr[n],i;
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

    selection_sort(arr,n);
    
    printf("Selection sort is as follows: ");
    for(i=0;i<n;i++)
    {
    	printf("%d",arr[i]);
    	printf("\n");
	}
}
int selection_sort(int arr[],int size)
{
	int i,j,temp;
	
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	return arr;
}
