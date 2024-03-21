#include <stdio.h>
void main()
{
	int i,j;
	
	for(int i=1;i<=5;i++)
	{

		for(int j=5;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}