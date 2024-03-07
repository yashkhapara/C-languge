#include<stdio.h>
void main()
{
    int a,b,c,d,avg;

    printf("enter the value of a= ");
    scanf("%d",&a);
    printf("enter the value of b= ");
    scanf("%d",&b);
    printf("enter the value of c= ");
    scanf("%d",&c);

    d=a+b+c;

    avg=d/3;
    printf("Average of three numbers= %d\n",avg);

}