#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=2;
    int *p=&a;
    //int b=3;  
    //a=6;  
    printf("a = %d\twhereas\n&a = %d\n&p = %d",a,p,&p);
    printf("\np = %d",*p);
    system("pause");
}
