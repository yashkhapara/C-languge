#include<stdio.h>
void main()
{
	int a,b,c;

	printf("\n enter the value of a:");
	scanf("%d",&a);
	printf("\n enter the value of b:");
	scanf("%d",&b);
	printf("\n enter the value of c:");
	scanf("%d",&c);

	if(a<b){
		if(a<c){
			printf("a is small");
		}
	}
	else if(b<c)
	{
		printf("b is small");
	}
	else
	{
		printf("c is small");
	}
}