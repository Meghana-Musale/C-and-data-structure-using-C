#include<stdio.h> 
int main() 
{ 
	int mark;  
 	printf("Enter your Marks="); 
	scanf("%d",&mark); 
 	if(mark>=90 && mark<=100) 
 	{ 
  		printf("A Grade..."); 
 	} 
 	else if(mark>=80 && mark<=90) 
 	{ 
  		printf("B Grade..."); 
	} 
 	else if(mark>=60 && mark<=80) 
 	{ 
  		printf("C Grade..."); 
 	} 
 	else if(mark>=40 && mark<=60) 
 	{ 
  		printf("D Grade..."); 
 	} 
 	else 
 	{ 
  		printf("Fail..."); 
 	} 
}
