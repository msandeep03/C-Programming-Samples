#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5]={22,33,44,55,66};
    int pivot=a[(sizeof(a)/sizeof(a[0]))-1];
    printf("Pivot = %d",pivot);
    
    getch();
return 0;    
}
