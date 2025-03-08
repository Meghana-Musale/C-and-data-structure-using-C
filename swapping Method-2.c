#include<stdio.h>  
int main() 
{ 
	int a,b;  
	printf("Enter two no="); 
 	scanf("%d%d",&a,&b); 
 	printf("\nBefore Swapping\n"); 
 	printf("frist no is (a):%d",a); 
 	printf("\nsecond no is (b):%d",b); 
 	a=a+b; 
 	b=a-b; 
 	a=a-b; 
 	printf("\n\nAfter Swapping"); 
 	printf("\nfrist no is (a):%d",a); 
 	printf("\nsecond no is (b):%d",b); 
}
