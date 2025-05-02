#include<stdio.h>
#define MAX 100
int main()
{
	int arr[MAX],i,j,n,mid,k,left,right,size;
	int temp[n];
	printf("Enter no of ele into an array:");
	scanf("%d",&n);//6
	printf("\nEnter %d array ele:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);//5 2 9 6 4 7
	}
	for(size=1;size<n;size*=2)//s=1<6 2<6 4<6
	{// 2 5 6 9 4 7
	//2 4 7 5 6 9
		for(left=0;left<n-1;left+=2*size)
		{//l=0 
			mid=left+size-1; //m=3
			right=(left+2*size-1<n-1)?left+2*size-1:n-1;
			//r=5
			i=left,j=mid+1;//i=0 j=4
			k=left;// k=0
			while(i<=mid&&j<=right)// 0<=3 1<=3&&4<=5 1<=3&&5<=5
			{ //1<=3&&6<=5 
				if(arr[i]<arr[j])//2<4 5<4 5<7
				temp[k++]=arr[i++]; //t[0]=2 k=1 i=1
				else
				temp[k++]=arr[j++];//t[1]=4 k=2 j=5 t[2]=7 k=3 j=6
			}
			while(i<=mid)//1<=3 2<=3 3<=3
			temp[k++]=arr[i++];
			//t[3]=5 k=4 i=2 t[4]=6 k=5 i=3 t[5]=9 k=6 i=4
			while(j<=right)// 6<=5
			temp[k++]=arr[j++];
			for(i=left;i<=right;i++)//
			{//i=0<=5
			arr[i]=temp[i];//a[0]=2 a[1]=4 a[2]=7 a[3]=5 a[4]=6 a[5]=9 
			printf("arr=%d\n",arr[i]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
