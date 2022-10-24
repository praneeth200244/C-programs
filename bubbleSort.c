/* C program to o input N integer numbers into a single dimension array, sort them in to ascending order using BUBBLE SORT technique, and then to print both the given array and the sorted array with suitable headings.
   Name of the program:bubbleSort.c
*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in array: "); scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array: ");
    for(int i = 0; i < n; i++)
    	scanf("%d",&a[i]);
    printf("Elements of array: ");
    for(int i = 0; i < n; i++)
    	printf("%d ",a[i]);
    for(int i = 0; i < (n-1); i++)
    {
        for(int j = 0; j < (n -1 - i); j++)
	    {
	        if(a[j] > a[j+1])
	        {
		        int temp = a[j];
   		        a[j] = a[j+1];
		        a[j+1] = temp;
            }
        }
    }  
    printf("\nSorted elements of array: ");
    for(int i = 0; i < n; i++)
    	printf("%d  ",a[i]);
    return 0;
}
