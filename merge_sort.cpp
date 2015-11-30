#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void merge(int *a, int *left, int *right, int nleft, int nright){
 int i=0,j=0,k=0;
 while(i<nleft && j<nright){
  if(left[i]<right[j])
   a[k++]=left[i++];
  else
   a[k++]=right[j++];
 }

 while(i<nleft)
  a[k++]=left[i++];
 while(j<nright)
  a[k++]=right[j++];
}

void mergesort(int *a, int n){
 if(n<2)
  return;
 int mid = n/2;
 int *left, *right;
 left = (int*)malloc(mid*sizeof(int));
 right = (int *)malloc((n-mid)*sizeof(int));
 
 for (int i = 0; i < mid; ++i)
  left[i]=a[i];
 
 for (int i = mid; i < n; ++i)
  right[i-mid]=a[i];
 
 mergesort(left,mid);
 mergesort(right,n-mid);
 merge(a,left,right,mid,n-mid);
 free(left);
 free(right);
}

void show(int *a, int n){
 for(int i=0;i<n;i++)
       printf("%d\n",a[i]);
}

int main(){
 int a[8]={2,4,1,6,8,5,3,7};
 int n=sizeof(a)/sizeof(a[0]);
    mergesort(a,n);
    show(a,n);
 getch();
 return 0;
}
