#include<stdio.h>
void main()
{
    int i,j;
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }
}