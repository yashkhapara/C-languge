#include <stdio.h>
void main(){

	for(int i=1;i<=5;i++)
	{
		for(int k=4;k>=i;k--)
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