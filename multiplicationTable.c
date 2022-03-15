//c program to generate multiplication table
#include<stdio.h>
int main()
{
	int num1,i,num2;
	printf("Parth Pidurkar \n");
	printf("Enter the number to for multiplication table  :\n");//taking  input
	scanf("%d",&num1);
	printf("multiplication table of %d\n",num1);
	for(i=1;i<=10;i++)//for loop for forming tables
	{
		num2 = num1 * i;
		printf("%d\n",num2);
	}
	return(0);
	
}
