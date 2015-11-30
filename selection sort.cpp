#include<stdio.h>
#include<conio.h>
void show(int *ptr,int range){
     printf("\n\n");
   for(int i=0;i<range;i++,ptr++)
      printf("%d\t",*ptr);
         
}

int main(){
    
    int range=0;
    printf("Enter range: ");
    scanf("%d",&range);
    int a[10];
    
    for(int i=0;i<range;i++){printf("\nEnter %d: ",i);
            scanf("%d",&a[i]);}
    int *ptr;
    ptr=a;
    printf("Before Sorting: \n");
    show(a,range);
    int t=0;
    for(int i=0;i<range;i++){
       for(int j=i+1;j<range;j++){
          if(a[i]>a[j])
          {
              t=a[i];
              a[i]=a[j];
              a[j]=t;       
              show(a,range);       
          }     
         }
       }
    printf("\nAfter Sorting: ");
    show(a,range);
    getch();
    return 0;
    }
