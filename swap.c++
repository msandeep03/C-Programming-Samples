#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    int a[] = {12,14,23,42,28,33,39,25,45},count=0,temp=0;
    for(int i=0;i<strlen(a);i++){
            if(a[i]<a[i+1] && count<=1){
            	temp=a[i]; a[i]=a[i+1];a[i+1]=temp;                 
                }
            }
    printf("Count = %d\n", count);
    getchar();
    return 0;
    }
