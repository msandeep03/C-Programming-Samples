#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(long *a, long *left, long *right, long nleft, long nright)
{
	long i=0,j=0,k=0;
	while(i<nleft && j<nright)
	{
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

void show(long *a, long n)
{
    for(long i=0;i<n;i++)
       printf("%d = %ld\n",i+1,a[i]);
}

void mergesort(long *a, long n)
{
	if(n<2)
		return;
		
	long mid = n/2;
	long *left, *right;
	left = (long*)malloc(mid*sizeof(long));
	right = (long *)malloc((n-mid)*sizeof(long));
	
	for (long i = 0; i < mid; ++i)
		left[i]=a[i];
	
	for (long i = mid; i < n; ++i)
		right[i-mid]=a[i];
	
    mergesort(left,mid);
    mergesort(right,n-mid);
	merge(a,left,right,mid,n-mid);
	free(left);
	free(right);
}


int main()
{
	long a[100000];
	srand(time(NULL));
	for(long i=0; i<100000; i++)
	{
		a[i] = (rand()% 100000 + 1);
	}
	long n=sizeof(a)/sizeof(a[0]);
    mergesort(a,n);
    show(a,n);
    system("pause");
	return 0;
}
