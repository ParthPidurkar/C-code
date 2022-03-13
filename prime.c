#include<stdio.h>
#include<conio.h>
int main()
{
	 printf("c program to check if a number is prime or not\n");
	 int num,i,c=1;
	 printf("Enter the number to check prime or not : ");
	 scanf("%d",&num);
	 for(i=2;i<=num;i++)
	 {
	 	if(num%i==0)
	 	{
	 		c++;
		 }
	 }
	 if(c==2)
	 {
	 	printf("%d is a prime number",num);
	 }
	 else
	 {
	     printf("%d is a not prime number",num);	
	 }
	 return(0);
}
