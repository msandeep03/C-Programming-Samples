#include<stdio.h>
#include<conio.h>
int main(){
    int n=0,range=0;
    scanf("%d",&range);
    int count=0;
    for(int i=1;i<=range;i++)
    {
        for(int j=1;j<=i;j++)
        {
                 if(i%j==0){count++;}
                 if(count==2){
                 printf("\n%d is a Prime Number",i);}
                 else
        }
    }
    
    getch();
    return 0;
    }
