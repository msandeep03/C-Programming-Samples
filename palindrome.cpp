#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//palindrome fucntion
void pal(char a[])
{
    static int j,count;
    for(int i=strlen(a)-1;i>=0;i--)
    {
           if(a[i]!=a[j])
           count++;
           j++;
    }
    if(count>0)
    {printf("\nNot same");}
    else printf("\nsame");

}

int main()
{
    fflush(stdout);
    char a[]="malayalam";
/*    static int j,count;
    printf("%d",strlen(a));
    for(int i=strlen(a)-1;i>=0;i--)
    {
           printf("\n##tered here a[%d] = %c\n",i,a[i]);
           if(a[i]!=a[j])
           {printf("\nentered here a[%d] = %c\n",i,a[i]);
           count++;}
           j++;
    }
    if(count>0)
    {printf("\nNot same");}
    else printf("\nsame");
*/
    pal(a);
    system("pause");
    return 0;
    }
