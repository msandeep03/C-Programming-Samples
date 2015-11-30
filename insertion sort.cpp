#include<stdio.h>
#include<conio.h>
void show(int *ptr,int range)
{    printf("\n");
     for(int i=0;i<range;i++,ptr++)
        printf("%d\t",*ptr);
}

int main()
{
    int *ptr;
    int j=0,n=0,range=0,a[100];
    scanf("%d",&range);
    printf("Enter elements: ");
    scanf("%d",&n);
    for(int i=0;i<range;i++)
    {      
        j=i-1;      
        while(n<a[j] && j>=0)
        {
           a[j+1]=a[j];
           --j;
        }
        a[j+1]=n;
        if(i!=range-1)
        {
           scanf("%d",&n);              
        }
    }
    ptr=a;
    show(a,range);
getch();    
return 0;
}
