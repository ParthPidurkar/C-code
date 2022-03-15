// C code for find the sum of all array element
#include<stdio.h>
int main()
{
	printf("Parth Pidurkar\n");
	int arr[100],n,i,sum=0;
	printf("Enter how many element to enter :-\n");// taking input for number of element in array
	scanf("%d",&n);
	printf("Enter the element of array :- \n");// initialising value of an array
	for(i =0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i =0;i<n;i++)//performing sum of all array number
	{
	 sum= (sum + arr[i]);
	}
	printf("Sum of all array element :- %d",sum);//printing the sum of all array element
	return(0);	
}
