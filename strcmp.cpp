#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//compare function
char comp(char a[],char b[])
{
     static int j,count;
    for(int i=0;i<strlen(a);i++)
    {
           if(a[i]!=b[j])
           count++;j++;        
    }
    if(count>0)
    {return printf("\nNot same");}
    else return printf("\nsame");
}

int main()
{
    char a[]="qwerty";
    char b[]="qwerty";
    comp(a,b);
    /*
    static int j,count;
    for(int i=0;i<strlen(a);i++)
    {
           if(a[i]!=b[j])
           count++;j++;        
    }
    if(count>0)
    {printf("\nNot same");}
    else printf("\nsame");
    */
    system("pause");
    return 0;
    }
