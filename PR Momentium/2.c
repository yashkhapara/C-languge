// Write a Program to input electricity unit charges and calculate the total electricity bill according to the given condition...

#include <stdio.h>
void main()
{

    float amount, total, charge, unit;

    printf("Enter electricity units: ");
    scanf("%f", &unit);

    if(unit <= 50)
    {   
        amount = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amount = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amount = 100 + ((unit-150) * 1.20);
    }
    else
    {
       amount = 220 + ((unit-250) * 1.50);
    }


    charge = amount * 0.20;
    total  = amount + charge;

    printf("Electricity Bill = Rs. %.2f", total);

}