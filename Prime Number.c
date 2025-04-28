//Prime Number
#include<stdio.h>
int main()
{
	int i,j,c;
	for(i=1;i<=100;i++)
	{
		c=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==1)
		{
			printf("\n%d",i);
		}
	}
}
