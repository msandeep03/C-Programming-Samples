#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void len(const char *a)
{		
     static int count;
     for(int i=0;i!='\0';i++)
     {count++;}
     printf("%d",count);
}

int main()
{
    char a[]="Hello";
    len(a);
    system("pause");
    return 0;    
}
