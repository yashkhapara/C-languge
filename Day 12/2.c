

#include <stdio.h>
void main(){

	int fact=1,n;

	printf("Enter any number = ");
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		fact *=i;
	}
	printf("The factorial is = %d",fact);
}