#include <stdio.h>
#include <conio.h>
#define R 3
#define C 3
int min(int a, int b, int c){
	if(a<b)
		return (a<c) ? a : c;
	else return (b<c) ? b : c;
}

int mincost(int a[R][C], int m, int n){
	int tc[R][C];
	tc[0][0] = a[0][0];
	for(int i=1;i<=m;i++)
		tc[i][0] = tc[i-1][0]+a[i][0];
	for(int j=1;j<=n;j++)
		tc[0][j] = tc[0][j-1]+a[0][j];
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			tc[i][j] = min(tc[i-1][j],tc[i][j-1],tc[i-1][j-1]) + a[i][j];
	return tc[m][n];
}

int main(){
	int a[R][C] = { 4,4 ,4
,5 ,1 ,1
,3 ,1 ,1};
    printf("%d",mincost(a,2,2));
	getch();
	return 0;
}
