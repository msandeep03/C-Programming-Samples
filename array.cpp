#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[4]={0};
    int i=0;
    int *p=a;
    while(i<4){
    printf("%d\n",&a[i]);i++;}
    i=0;
    while(i<4){
    printf("%d\n",a[i]);i++;}
    i=0;
    while(i<4){
    printf("%d\n",*a);i++;}
    system("pause");
 return 0;    
}
