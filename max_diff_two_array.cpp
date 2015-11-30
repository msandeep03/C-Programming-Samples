#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
 int a[5]={80, 2, 6, 3, 100};
 int max=abs(a[1]-a[0]);
 printf("Max = %d\n\n",max);
 for(int i=0;i<5;i++)
 {
 printf("Max = %d\n",max);
    for(int j=i+1;j<5;j++)
    {
        if(a[j]-a[i]>abs(max))
        max=a[j]-a[i];       
    }
 }
 
 printf("%d",max);
 
 getch();    
return 0;
}
