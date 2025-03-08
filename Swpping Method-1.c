#include<stdio.h> 
int main() 
{ 
	int n1,n2,c; 
	printf("Enter two no="); 
	scanf("%d%d",&n1,&n2); 
	printf("\nBefore Swapping\n"); 
	printf("frist no is (n1):%d",n1); 
	printf("\nsecond no is (n2):%d",n2); 
	c=n1; 
	n1=n2; 
	n2=c; 
	printf("\n\nAfter Sapping"); 
	printf("\nfrist no is (n1):%d",n1); 
	printf("\nfrist no is (n2):%d",n2); 
	return 0;
} 
