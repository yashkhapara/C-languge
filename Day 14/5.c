#include <stdio.h>
void main(){

	for(int i=1;i<=5;i++)
	{
		for(int k=1+1;k<=i;k++)
		{
			printf(" ",k);
		}
		for(int j=5;j>=i;j--)
		{
			printf("%d",j);
		}
		
		printf("\n");
	}
}