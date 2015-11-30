#include <stdio.h>
#include <conio.h>
int main()
{
    fflush(stdin);
      int i,j,d=0;
      //printf("Enter a range: ");
      //scanf("%d%d", &lb,&ub);
     static int flag;
      for (i=1; i<=100; i++)
      {//printf("%d = %d\n",i,flag);
      //flag=0;
      for (j=2; j<=i/2; j++)
      {
      if (i%j==0)
      flag++;
      }
      d++;
      if (flag==0)
      printf("\n %d\n", i);
      } 
      printf("\n total prime nos are= %d", d);
      getch();
}     

