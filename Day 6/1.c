#include<stdio.h>
void main()
{
	int  a,b,c,d,e;

	printf("Enter the original price = ");
	scanf("%d",&a);


	printf("Enter the discount percentage = ");
	scanf("%d",&b);

	c=a*b;
	d=100;
	e=c/d;

	printf("Discount amount :%d",e);
}