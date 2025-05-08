#include<stdio.h>
#define size 100
int binarysearch(int a[],int n,int key);
int binarysearchR(int a[],int first,int last,int key);
int main()
{
	int n,i,key,a[size],index;
	printf("Enter no. of ele to the sorted array:");
	scanf("%d",&n);
	printf("\nEnter %d ele into an array:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the ele to be searched:");
	scanf("%d",&key);
	index=binarysearch(a,n,key);
	if(index==-1)
	printf("\n%d is not found in an array:",key);
	else
	printf("\n%d is found of %d index",key,index);
	return 0;
}
int binarysearch(int a[],int n,int key)
{
	return binarysearchR(a,0,n-1,key);
}
int binarysearchR(int a[],int first,int last,int key)
{
	int mid;
	if(first>last)
	return -1;
	mid=(first+last)/2;
	if(key>a[mid])
	return binarysearchR(a,mid+1,last,key);
	else if(key<a[mid])
	return binarysearchR(a,first,mid-1,key);
	else
	return mid;
}
