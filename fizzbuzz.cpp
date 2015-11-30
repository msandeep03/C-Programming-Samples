#include <stdio.h>
#include <stdlib.h>
int main(){
    static int count;
    for(int i=0;i<100;i++){
            if(i%3==0 && i%5==0)printf("FizzBuzz = \t%d\n",i);
            else if (i%3==0)printf("Fizz \t= \t%d\n",i);
            else if (i%5==0)printf("Buzz \t= \t%d\n",i);
            else {printf("%d\tcount = %d\n",i,count+1);count++;}
            }
    system("pause");
    return 0;
    }
