#include<stdio.h>
void main()
{
	int a,b,c,d;

	printf("\n enter the value of a:");
	scanf("%d",&a);
	printf("\n enter the value of b:");
	scanf("%d",&b);
	printf("\n enter the value of c:");
	scanf("%d",&c);
	printf("\n enter the value of d:");
	scanf("%d",&d);

	if(a>b && a>c && a>d){
		printf("A is bigg...");
	}
	else if(b>c && b>d){
		printf("B is bigg...");
	}
	else if(c>d){
		printf("C is bigg...");
	}
	else{
		printf("D  is bigg...");
	}
}
