#include <stdio.h>
#include <stdlib.h>


int main(){
    fflush(stdin);
    fflush(stdout);
    static int count;
    int d=0;
    for(int i=2;i<=100;i++){
            int d=0,count=0;
            for(int j=1;j<=i/2;j++)
            {
                if(i%j==0)
                {
                          count++;     
                }
            }d++;
                        if(count<2)
            {printf("%d\n",i);}
    }
    
    
/*
    for(int i=1,j=22;i<=100;i++){
            if(j%i==0){count++;           }
            }
    
    if(count==2){printf("Prime");}
    else {printf("Not Prime");}
  */  
  printf("%d = Total",d);
    system("pause");
    return 0;}
