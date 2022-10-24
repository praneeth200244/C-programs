/* C program to find the value of cos(x) using the series, 1 - x2/2! + x4/4! - x6/6! + x8/8! - ... up to N terms accuracy
   Name of the program : cosx.c
*/
#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int n, i;
    float sum = 1, x, t = 1;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("Enter the angle in degree: ");
    scanf("%f",&x);
    x = (x * 3.14159) / 180; 
    printf("Angle in radian = %2f rad",x);
    for(i = 1; i <= n; i++)
    {
        t = t * (-1) * x * x / (2 * i * (2 * i - 1));
        sum += t;
    }
    printf("\nValue of cos(%.2f) is %.2f\n",(x * 180 / 3.14159),sum);
    return 0;
}
