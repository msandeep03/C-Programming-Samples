#include <stdio.h>
#include <conio.h>

int partition(int *a, int start, int end){
	int pivot=a[end];
	int pIndex=start;
	for (int i = start; i < end; ++i){
		if (a[i]<=pivot){
			int temp=a[i]; a[i]=a[pIndex]; a[pIndex]=temp;
			pIndex++;
		}
	}
	int temp = a[pIndex]; a[pIndex]=a[end]; a[end]=temp;;
	return pIndex;
}

void quicksort(int *a, int start, int end){
	if (start<end){
		int pIndex = partition(a, start, end);
		quicksort(a, start, pIndex-1);
		quicksort(a, pIndex+1, end);
	}
}

void show(int *a, int end){
	for(int i=0;i<end; i++)
    	printf("%d\t",a[i]);
}

int main(){
	int a[] = {2,1,3,8,5,7,6,4};
	int end = sizeof(a)/sizeof(a[0]);
	quicksort(a, 0, end-1);
    show(a,end);
    	
	getch();
	return 0;
}
