#include<stdio.h>
static int count=0;
int numofdig(int num)
{
	
	if(num>0)
	{
	
		num=num/10;
		count++;
		printf("%d\n",count);
		numofdig(num);
	}
	return count;

}
int main()
{
	int num1,result;
	
	printf("Enter the thr integer number :-\n");
	scanf("%d",&num1);
	
	printf("\n number of digites in integer number :-%d\n",numofdig(num1));
	
	return(0);
}
