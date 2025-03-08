#include<stdio.h> 
int main() 
{ 
	int age; 
	printf("Enter your Age="); 
 	scanf("%d",&age); 
 	if(age>=1 && age<=18) 
	{ 
 		printf("You are Child..."); 
 	} 
	if(age>=19 && age<=60) 
 	{ 
 		printf("You are Young..."); 
 	} 
 	if(age>=61) 
 	{ 
  		printf("You are Old..."); 
 	} 
} 

