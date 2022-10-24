/*  C program to simulate Simple calculator.
    Name of the program:calculator.c
*/

#include <stdio.h>

int main()
{
    float a,b;
    int choice;
    printf("Enter any two numbers: ");  scanf("%f%f",&a,&b);
    printf("Enter\n\t1 ---> Addition\n\t2 ---> Subtraction\n\t3 ---> Multiplication\n\t4 ---> Division");
    printf("\nEnter your choice: "); scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("The sum of %.2f and %.2f is %.2f", a, b, a+b); break;
        case 2:printf("The difference between %.2f and %.2f is %.2f", a, b, a-b); break;
        case 3:printf("The product of %.2f and %.2f is %.2f", a, b, a*b); break;
        case 4:if(b == 0)
                    printf("SOLUTION DOES'NT EXISTS....");
               else
                    printf("The quotient of %.2f and %.2f is %.2f",a,b,a/b); break;
        default:printf("INVALID CHOICE......"); break;
    }
    return 0;
}