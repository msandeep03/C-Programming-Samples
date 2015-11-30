#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    static int i;
    
    printf("%d",i);
    i=2;
    printf("%d",i);
    system("pause");return 0;
    }
