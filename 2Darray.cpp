#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[2][3]={0};
    int (*p)[3]=a;
    printf("p = %d",*p);
    system("pause");
 return 0;    
}
