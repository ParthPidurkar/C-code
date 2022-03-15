// c program for copy element of one array into other array
#include<stdio.h>
int main()
{
	printf("Parth Pidurkar\n");
	int arr1[100],arr2[100],n,i;
	printf("Enter how many element to enter :-\n");// taking input for number of element in array
	scanf("%d",&n);
	printf("Enter the element of array :- \n");// initialising value of an array
	for(i =0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Element of first array\n");
	for(i =0;i<n;i++)
	{
		printf("%d\t",arr1[i]);
	}
	for(i =0;i<n;i++)
	{
		arr2[i] = arr1[i];
	}
	printf("\nElement of second array\n");
	for(i =0;i<n;i++)
	{
		printf("%d\t",arr2[i]);
	}
	return(0);
}
