#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//reverse function
void rev(char a[])
{
    char b[strlen(a)];
    int j=0;
    puts(a);
    for(int i=strlen(a)-1;i>=0;i--)
    {
                b[j]=a[i];
    //        printf("%c",b[j]);
            j++;
    }
    puts(b);
         
}

int main()
{
    fflush(stdout);
    char a[]="Marge let a moody baby doom a telegram";
    /*char b[strlen(a)];
    int j=0;
    puts(a);
    for(int i=strlen(a)-1;i>=0;i--)
    {
            b[j]=a[i];
    //        printf("%c",b[j]);
           j++;
    }*/
    rev(a);
    fflush(stdout);
    system("pause");
    return 0;
    }
