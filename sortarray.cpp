#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sorta(char *a)
{
     for(int i=0;i<strlen(a);i++)
     {
         for(int j=0;j<strlen(a)-1;i++)
         {
             if(a[i]>a[j])
             {char temp=a[i];a[i]=a[j];a[j]=a[i];}       
         }        
     }     
}
int main()
{
    char a[]="acbed";
    sorta(&a);
    system("pause");
    return 0;
    }
