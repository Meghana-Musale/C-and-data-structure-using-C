#include<stdio.h>
int main()
{
	int a=1,b=2,c=3;
	int *p[3],i;
	p[0]=&a; 
	p[1]=&b; 
	p[2]=&c; 
	for(i=0;i<3;i++)
	{
		printf("\n address of p[%d]:%d\n",i,p[i]);
		printf(" value of p[%d] :%u\n\n",i,*p[i]);
	}
}
