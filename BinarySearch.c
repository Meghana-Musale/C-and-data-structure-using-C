#include<stdio.h>
int binarySearch (int list[],int low,int high,int target);
int main()
{
    int size;
    printf("Enter no.of elements");
    scanf("%d",&size);
    int list[size],i;
    int value,lastpos,high,low,p;
    lastpos = size;
    printf("Enter value of elements");
    for(i=0;i<lastpos;i++)
      scanf("%d",&list[i]);
    printf("Enter value to find: ");
    scanf("%d",&value);
    low=0;
    high=size-1;
    p=binarySearch(list,low,high,value);
    printf("The given value is present at %d position",p+1);
}
int binarySearch (int list[],int low,int high,int target)
{
    int c,mid;
    c=-1;
   // printf("%d %d",low,high);
    while(low<=high)
    {
       mid=(low+high)/2;
       if(list[mid]==target)
       {
         return mid;
       }
       if(list[mid]>target)
          high=mid-1;
       else
          low=mid+1;
       
   }
   
   return c;
}
