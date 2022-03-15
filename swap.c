// C program for swap two numbers
#include<stdio.h>
int main()
{
	int num1,num2,temp;
	printf("Parth Pidurkar \n");
	printf("Enter the value of first number :\n");//taking first input
	scanf("%d",&num1);
	printf("Enter the value of second number :\n");//taking second input
	scanf("%d",&num2);
	//before swaping value
	printf("Before Swaping values\n");
	printf("num1 = %d\n",num1);
	printf("num2 = %d\n",num2);
	//swaping the value using 3ed variable
	temp = num1;
	num1 = num2;
	num2 = temp;
	//after swap value
	printf("After Swaping values\n");
	printf("num1 = %d\n",num1);
	printf("num2 = %d\n",num2);
	return(0);
}
