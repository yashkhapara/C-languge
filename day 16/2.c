#include<stdio.h>
void main()
{
    int a[3][3];
    float avr;
    int sum=0;

    for(int i=0;i<3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter value:");
            scanf("%d",&a[i][j]);
        }
        
    }

     for(int i=0;i<3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",a[i][j]);

            if(i==j)
            {
                sum +=a[i][j];
            }
            
        }
        printf("\n");
        
    }
    printf("the sum of array: %d",sum);

}