/*  C program to accept two non-zero numbers and perform basic arithmetic operations
    Name of the program:arithmeticOperations.c
*/

#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter any two non-zero numbers: "); scanf("%d%d",&a,&b);
    printf("\nThe sum of %d and %d is %d\n",a,b,a+b);
    printf("The difference between %d and %d is %d\n",a,b,a-b);
    printf("The product of %d and %d is %d\n",a,b,a*b);
    printf("The quotient of %d and %d is %d\n",a,b,a/b);
    printf("The remainder of %d and %d is %d\n\n",a,b,a%b);
    return 0;
}