/* C program to generate electricity bill depending on the Units consumed and varying rates for units consumed.
   Name of the program:electricityBill.c
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b;
    float amt, FAC_charge, total_amt;
    printf("Enter the previous meter reading: ");  scanf("%d",&a);
    printf("Enter the present meter reading: ");   scanf("%d",&b);
    if(a > b)
    {
        printf("Invalid Input...\n\tPrevious reading cannot be greater than the present reading...");
        exit(0);
    }
     
    if((b - a) <= 30)
        amt = (b - a) * 4;
    else if((b - a) <= 100)
        amt = (30 * 4) + ((b - a - 30) * 5.45);
    else if((b - a) <= 200)
        amt = (30 * 4) + (70 * 5.45) + ((b - a - 100) * 7);
    else
        amt = (30 * 4) + (70 * 5.45) + (100 *7) + ((b - a - 200) * 8.05);
    FAC_charge = (amt * .22);
    total_amt = (amt) + (FAC_charge) + (amt * .04);
    printf("Consumption in Units: %d kWh", (b - a));
    printf("\nFAC charge is %.2f", FAC_charge);
    printf("\nThe total amount to be paid is %.2f\n", total_amt);
    return 0;
}