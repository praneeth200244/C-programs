/* C program to generate and print first ‘n’ Fibonacci numbers
   Name of the program:fibonacci.c
*/

#include<stdio.h>

int main()
{
    int n, t1, t2, next_term;
    printf("Enter the number of fibonacci terms(n): ");   scanf("%d",&n);
    printf("Enter first two fibonacci terms: ");    scanf("%d%d",&t1,&t2);
    printf("First %d fibonacci terms are: ",n);
    for(int i = 1; i <= n; i++)
    {	
        printf("%d  ",t1);
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }
    return 0;     
}