#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void findmax(int *a, int n)
{
	int max=0;
	for (int i = 0; i < n; ++i)
	  {
	  	if(a[i]>max)
	  	{
	  		max = a[i];
	  		int temp = a[0];
	  		a[0] = a[i];
	  		a[i] = temp;
	  	}
	  }  
}

void sortrest(int *a, int n)
{
    for (int i = 1; i < n; i++){
    	for (int j = 1; j < n-i; j++){
      	 	if(a[j]>a[j+1])
          	{
              int t=a[j];
              a[j]=a[j+1];
              a[j+1]=t;
          	}
    	}
  	}
}

void show(int *a, int n)
{
	  for (int i = 0; i < n; ++i)
	  	  	printf("%d\n", a[i]);
}

int main()
{
    int n=20;
	int *a;
	a = (int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
        a[i] = rand()%100;
	
	findmax(a,n);
    sortrest(a,n);
	show(a,n);
    return 0;
}
