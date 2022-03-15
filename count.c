//C program to count number of digits  in an integer
#include<stdio.h>
int main()
{
	int num1,count=0;
	printf("Parth Pidurkar \n");
	printf("Enter integer number :\n");//taking integer input
	scanf("%d",&num1);
	while(num1>0)
	{
		num1 = num1/10;
		count++;
	}
	printf("number of digites in an integer is %d",count);
    return(0);
}
