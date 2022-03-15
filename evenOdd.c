//C code for finding Even or Odd
#include<stdio.h>
int main()
{
	int num1;
	printf("Parth Pidurkar \n");
	printf("Enter the value to find Even or Odd number :\n");//taking  input
	scanf("%d",&num1);
	if(num1 % 2 == 0)//check whether number id divided by 2
	{
		printf("%d is a Even number",num1);
	}
	else
	{
		printf("%d is a Odd number",num1);
	}
	return(0);

}
