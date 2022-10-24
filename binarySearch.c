/* C program to input N integer numbers in ascending order into a single dimension array, and then to perform a BINARY SEARCH for a given key integer number and report success or failure in the form of a suitable message
   Name of the program:binarySearch.c
*/

#include<stdio.h>

int main()
{
   int n; 
   printf("Enter the number of elements in array: "); scanf("%d",&n);
   int a[n], key, low, high, found = 0, temp, mid;
   printf("Enter the elements of array: ");
   for(int i = 0; i < n; i++)
   	scanf("%d", &a[i]);
   printf("Elements of array are: ");
   for(int i = 0; i < n; i++)
   	printf("%d ",a[i]);
   for(int i = 0; i < (n-1); i++)
   	for(int j = 0; j < (n-1-i); j++)
		   if(a[j] > a[j+1])
		   {
		      temp = a[j];
   		   a[j] = a[j+1];
		      a[j+1] = temp;
         }
   printf("\nSorted elements of array: ");
   for(int i = 0; i < n; i++)
   	printf("%d  ",a[i]);
   printf("\nEnter the key element to be searched: ");  scanf("%d",&key);
   low = 0;
   high = (n-1);
   while(low <= high)
   {
	   mid = low+(high-low)/2;
	   if(key > a[mid])
  	      low = mid + 1;
	   else if(key < a[mid])
	      high = mid -1;
	   else if(key == a[mid])
      {
	      printf("SEARCH SUCCESSFUL...\n%d is found at position %d", key, mid+1);
         found = 1;
	      break;
   	}	 
   }
   if(!found)
   	printf("SEARCH UNSUCCESSFULL.....");
   return 0;
}
