#include <stdio.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#define rows 3
int min(int a[][rows], int m, int n){
	if(a<m)
		return (a<n) ? a : n;
	else return (m<n) ? m :n;
}

int mincost(int a[][rows],int m,int n){
	if(m<0 || n<0)
		return 0;
	else if(m==0 && n==0)
		return a[m][n];
	else return a[m][n]+min(mincost(a,m-1,n-1), mincost(a,m-1,n), mincost(a,m,n-1));
}

void show(int a[][rows]){
	for(int i=0;i<rows && printf("\n");i++){
		for (int j=0;j<rows;j++){
			printf("%d ",a[i][j]);
		}
	}
}

int main(){
	int a[rows][rows];
	for(int i=0;i<rows;i++){
		for(int j=0;j<rows;j++)
			scanf("%d",&a[i][j]);
	}
	show(a);
	printf("%d", mincost(a,rows-1,rows-1));
	getch();
	return 0;
}
