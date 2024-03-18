#include<stdio.h>
void  main()
{
	int a,b,c;

	printf("Enter a value of the first number = \n");
	scanf("%d",&a);

	printf("Enter a value of the second number = \n");
	scanf("%d",&b);

	printf("Enter a value of the third number = \n");
	scanf("%d",&c);

	(a<b)?(a<c)?
	printf("A is small..."):printf("B is small..."):
	(b<c)?printf("B is small..."):printf("C is small...");

} 	