#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ch[10];
    scanf("%s",ch);
    int x=strlen(ch);
    for(int i=0;i<2*strlen(ch);i++)
    {
      if(i<strlen(ch))
      {
          for(int j=0;j<strlen(ch)-i;j++)
          printf("%c",ch[j]);
        
          for(int j=0;j<i*2;j++)
          printf(" ");
        
          for(int j=strlen(ch)-i-1;j>=0;j--)
          printf("%c",ch[j]);
        
          printf("\n");
      }
      if(i==7)
      continue;
      else
      {int y=1;
          for(int j=0;j<y;j++)
          printf("%c",ch[j]);
          
          
          for(int j=0;j<2*x-2;j++,x--)
          printf(" ");
          
          for(int j=0;j<=i;j++)
          printf("%c",ch[j]);
          
          printf("\n");
          
      }
       
    }
   getch();                 
return 0;
}
