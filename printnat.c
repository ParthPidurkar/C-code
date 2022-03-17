#include<stdio.h>
int printnat(int i)
{
	if(i!=0)
	{
	 	printf("%d\n",i);
	 	i--;
		 printnat(i);
	}
}
void main()
{
	
	printnat(50);
}
