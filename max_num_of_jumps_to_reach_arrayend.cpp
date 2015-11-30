#include <stdio.h>
#include <limits.h>
#include <conio.h> 
// Returns minimum number of jumps to reach arr[h] from arr[l]
int minJumps(int arr[], int l, int h)
{   static int c=0;
    printf("\n#%d Entered\n",c);
   // Base case: when source and destination are same
   if (h == l)
     return 0;
 
   // When nothing is reachable from the given source
   if (arr[l] == 0)
     return INT_MAX;
 
   // Traverse through all the points reachable from arr[l]. Recursively
   // get the minimum number of jumps needed to reach arr[h] from these
   // reachable points.
   int min = INT_MAX;
   //means i starting from 1 till (end && l+arr[l] means adding position to value at array)
   //yup this is done to prevent overflow
   for (int i = l+1; i <= h && i <= l + arr[l] && printf("i#%d %d\n",i,i+arr[l]); i++)
   {   c++;
       int jumps = minJumps(arr, i, h);
       if(jumps != INT_MAX && jumps + 1 < min)
           min = jumps + 1;
   }
 
   return min;
}
 
// Driver program to test above function
int main()
{
  int arr[] = {1, 3, 6, 3, 2, 3, 6, 8, 9, 5};
  int n = sizeof(arr)/sizeof(arr[0]);
  printf("\n\nMinimum number of jumps to reach end is %d ", minJumps(arr, 0, n-1));
  getch();
  return 0;
}
