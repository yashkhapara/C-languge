#include<stdio.h>
void main()
{
    int no,flag=0;

    printf("\n enter the number:");
    scanf("%d",&no);

    for(int i=2;i<no;i++)
    {
        if(no%i==0)
        {
            flag=1;
            break;
        }

    }

    if(flag==0)
    printf("\n The number %d is prime number...",no);

    else
    printf("\n The number %d is a not prime number...",no);
}