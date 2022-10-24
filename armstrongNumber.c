/* C program to find whether a number is armstrong or not
   Name of the program: armstrongNumber.c
*/

#include<stdio.h>

int main()
{
    int n, r, temp, sum = 0;
    printf("Enter any number: "); scanf("%d",&n);
    temp = n;
    while(n != 0)
    {
	    r = (n % 10);
	    sum += r * r * r;
        n /= 10;
    }
    if(temp == sum)
        printf("%d is an armstrong number",temp);
    else
        printf("%d is not an armstrong number",temp);
    return 0;
}
