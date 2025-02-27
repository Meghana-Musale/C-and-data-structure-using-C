#include<stdio.h>
int linearSearch(int list[],int lastpos,int target);
int main()
{
    int size;
    printf("Enter no.of elements");
    scanf("%d",&size);
    int list[size],i;
    int value,p,target,lastpos;
    lastpos =size;
    
    printf("Enter value of elements");
    for(i=0;i<lastpos;i++)
      scanf("%d",&list[i]);
    
    printf("Enter value to find: ");
    scanf("%d",&value);
    target=value;
    p=linearSearch(list,lastpos,target);
    if(p==-1)
      printf("Value not in list");
    else
      printf("The given value is present at %d position",p);
}
int linearSearch(int list[],int lastpos,int target)
{
  int i,c;
  c=-1;
  for(i=0;i<lastpos;i++)
  {
    if(list[i]==target)
       return i+1;
  }
  return c;

}
