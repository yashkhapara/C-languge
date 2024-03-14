#include<stdio.h>
void main()
{
	int a,b,c;

	printf("Enter the value of A =\n");
	scanf("%d",&a);
	printf("Enter the value of B =\n");
	scanf("%d",&b);
	printf("Enter the value of c =\n");
	scanf("%d",&c);

    (a<b)?(a<c)?printf("A is small..."):printf("C is small..."):
    (b<c)?printf("B is small..."):printf("C is small...");
}