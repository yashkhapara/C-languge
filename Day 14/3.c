#include <stdio.h>
void main(){

	for(int i=5;i>=1;i--)
	{
		for(int k=i;k>=1;k--)
		{
			printf(" ",k);
		}
		for(int j=5;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}