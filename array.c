#include<stdio.h>
int main()
{
    printf("c program to enter 10 elements in arrey and find the largest\n");
    int i,lgst,arr[10];
    printf("Enter the elements of array: ");
    for(i = 0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements of array are: ");
    for(i = 0;i<10;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    for(i = 0;i<10;i++)
    {
        lgst = arr[0];
        if(arr[i]>lgst)
        {
            lgst = arr[i];
        }
    }
    printf("\nThe largest number is: %d",lgst);
    return 0;
}
