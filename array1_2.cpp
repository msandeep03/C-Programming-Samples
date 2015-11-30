#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5]={2,4,6,8,10};
    int *p=a;
    printf("p = %d\n",a);
    printf("*p = %d",*p);//deferencing p
    /*for(int i=0;i<5;i++)
    {
         printf("%d\n",p[i]);
    }
    */
    
    system("pause");
 return 0;    
}
