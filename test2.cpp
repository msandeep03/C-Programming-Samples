
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i=2;
    int j=i++ + i-- + ++i + --i + i;
printf("%d",j);
    system("pause");
    return 0;
    }
