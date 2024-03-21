#include <stdio.h>
void main()
{
	int i,j;
	
	for(int i=65;i<=69;i++)
	{
		for(int j=i;j>=65;j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}