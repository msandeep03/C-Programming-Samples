#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int max_diff(int a[],int size)
{
    int max=0;
    max=abs(a[1]-a[0]);
    int min_element=a[0];
    for(int i=2;i<size;i++)   
    {
        if(abs(a[i]-min_element)>abs(max))
        max=abs(a[i]-min_element);   
        if(a[i-1]<min_element)
        min_element=a[i-1];     
    }
    return max;
}
int main()
{
    int a[5]={80, 2, 6, 3, 100};
    int size=sizeof(a)/sizeof(a[0]);
    printf("Max Diff in matrix is %d",max_diff(a,size));
    getch();
    return 0;
}
