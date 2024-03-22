#include <stdio.h>
void main(){

	for(int i=5;i>=1;i--)
	{
		for(int k=i+1;k<=5;k++)
		{
			printf(" ",k);
		}
		for(int j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}