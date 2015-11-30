#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    FILE *fp;
    int rows=0,r;
    scanf("%d",&rows);
    unsigned long x=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=rows-i-1;j>0;j--)
        printf(" ");    
        x=(unsigned long)pow(11,i);
        while(x>0)
        {
            r=x%10;
            printf("%2d",r);
            fprintf(fp, "%2d",r);
            x=x/10;     
        }   
        printf("\n");   
    }
 getch();
 return 0;    
}
