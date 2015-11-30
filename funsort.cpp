#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(int *a)
{
     static int temp;
     for(int i=0;i<2;i++)
     {
         if(a[i]>a[i+1])
         {temp=a[i];a[i]=a[i+1];a[i+1]=a[i];}
     }     
     for(int i=0;i<2;i++)
     {printf("%d\t",a[i]);}
}

int main()
{
    int a[2]={2,1};
    sort(&a[]);
    system("pause");
    return 0;
    }
