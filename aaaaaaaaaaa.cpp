#include<stdio.h>
#include<conio.h>
 
int maxDiff(int arr[], int n)
{
    // Create a diff array of size n-1. The array will hold
    //  the difference of adjacent elements
    int diff[n-1];
    for (int i=0; i < n-1; i++){
        diff[i] = arr[i+1] - arr[i];printf("%d\n",diff[i]);}
 
    // Now find the maximum sum subarray in diff array
    int max_diff = diff[0];printf("\ndiff[0] = %d\n",diff[0]);
    for (int i=1; i<n-1; i++)
    {printf("diff[%d] = %d",i-1,diff[i-1]);
        if (diff[i-1] > 0){
            diff[i] = diff[i]+  diff[i-1];printf("diff %d = %d\n",i,diff[i]);}
        if (max_diff < diff[i]){
            max_diff = diff[i];printf("Max %d = %d\n",i,max_diff);}
    }
    return max_diff;
}
 
/* Driver program to test above function */
int main()
{
    int arr[] = {80, 2, 6, 3, 100};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum difference is %d",  maxDiff(arr, size));
getch();    return 0;
}
