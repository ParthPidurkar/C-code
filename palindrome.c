#include<stdio.h>
int main()
{
    printf("c program to check if number is palindrome\n");
    int num,revnum =0,ld,onum;
    printf("Enter the number: ");
    scanf("%d",&num);
    onum = num;
    while(num>0)
    {
        ld = num % 10;
        num = num/10;
        revnum = (revnum * 10) + ld;
    }
    if(onum == revnum)
    {
        printf("The number is palindrome!");
    }
    else
    {
        printf("The number is not a palindrome");
    }
    return 0;
}
