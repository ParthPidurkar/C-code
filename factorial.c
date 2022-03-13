#include<stdio.h>  
int main()    
{    
printf("c program for factorial of given number\n ");
 int i,fact=1,num;    
 printf("Enter a value : ");    
  scanf("%d",&num);    
    for(i=1;i<=num;i++)
	{    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",num,fact);    
return 0;  
}   
