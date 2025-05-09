#include<stdio.h>
int main()
{
	typedef int radius;
	radius r;
	float area;
	printf("Enter radius");
	scanf("%d",&r);
	area=3.14*r*r;
	printf("Area=%f",area);
	return 0;
	
}
