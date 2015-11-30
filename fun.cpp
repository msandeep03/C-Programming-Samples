#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//multiply
/*
int mul(int a , int b)
{
    return a*b;    
}*/
int sq(int *a)
{
    return *a**a;    
}
int main()
{
    int a[]={1,2,3};
//    printf("%d",mul(a,b));
      int i=0;
      while(i<3)
      {
      printf("%d\t",sq(&a[i]));    
      i++;}   
    system("pause");
    return 0;
    }
