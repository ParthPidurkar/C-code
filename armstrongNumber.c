//C program to count number of digits  in an integer
#include<stdio.h>
#include<math.h>
int main()
{
	int n,count=0,r,sum=0,temp;
	printf("Parth Pidurkar \n");
	printf("Enter number :\n");//taking integer input
	scanf("%d",&n);
	int n1 = n ;
    temp = n;
	while(n1>0)// to count number of digites
	{
		n1 = n1/10;
		count++;
	}
	while(n>0)
	{
		r=n%10;    
		int a = pow(r,count);
        sum=sum+ a;    
		n=n/10; 
	}
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");
	
	
    return(0);
}
