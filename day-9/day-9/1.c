
#include<stdio.h>

void main()
{
    int a,b,c;

    printf("Enter a value of A = ");
    scanf("%d",&a);
    printf("Enter a value of B = ");
    scanf("%d",&b);
    printf("Enter a value of C = ");
    scanf("%d",&c);

    (a<b)?(a<c)?
    printf("A is minimum"):printf("C is minimum"):
    (b<c)?printf("B is minimum"):printf("C is minimum");
}