/* C program to perform the following using bitwise operators:
	c = a & b ; d = a | b ; e = ~a
	f = a>>n; g = a<<n; h = a^b
   Name of the program : bitwiseOperators.c
*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,n;
    printf("Enter any two positive integers: "); scanf("%d%d",&a,&b);
    printf(" %d & %d = %d",a,b,a&b);
    printf("\n %d ^ %d = %d",a,b,a^b);
    printf("\n %d | %d = %d",a,b,a|b);
    printf("\n ~%d = %d",a,~a);
    printf("\nEnter the number of bits to be shifted in a and b: "); scanf("%d",&n);
    printf("%d >> %d = %d",a,n,a>>n);
    printf("\n%d >> %d = %d",b,n,b>>n);
    printf("\n%d << %d = %d",a,n,a<<n);
    printf("\n%d << %d = %d",b,n,b<<n);
    return 0;
}