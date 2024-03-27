#include<stdio.h>
void main()
{
    int y=11;/

	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",y);
			y++;
		}
		printf("\n");
	}
}