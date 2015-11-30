#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int max_diff(int a[], int size)
{
	int b[size-1];
	for(int i=0;i<size-1;i++){
		b[i]=abs(a[i+1]-a[i]);printf("%d\n",b[i]);}

	int max=b[0];printf("\nb[0] = %d\n",b[0]);
	for(int i=1;i<size-1;i++)
	{
		if(b[i-1]>0){printf("b[i-1] = %d",b[i-1]);
			b[i]=b[i]+b[i-1];printf("diff %d = %d\n",i,b[i]);}
		if(max<b[i]){
			max=b[i];;printf("Max %d = %d\n",i,max);}
	}
	return max;
}

int main()
{
    int a[5]={80, 2, 6, 3, 100};
    int size=sizeof(a)/sizeof(a[0]);
    printf("Maximum Diff: %d",max_diff(a,size));
    getch();
    return 0;
}
