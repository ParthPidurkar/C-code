//C Program for read n number of value in an array and display it in reverse order
#include<stdio.h>
int main()
{
	printf("Parth Pidurkar\n");
	int arr[100],n,i;
	printf("Enter how many element to enter :-\n");// taking input for number of element in array
	scanf("%d",&n);
	printf("Enter the element of array :- \n");// initialising value of an array
	for(i =0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array element before reversing\n");//printing array as enter by user
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n Array element after reversing\n");//printing reverse array 
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
	return(0);
	
}

