#include<stdio.h>
int main()
{
    printf("c program to print the pattern");
    int r,c;
    for(r = 0;r<5;r++)
    {
        for(c = 0;c<r;c++)
        {
            printf("*");
        }
        printf("\n");
    }
}
