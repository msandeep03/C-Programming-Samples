#include <stdio.h>
#include <conio.h>
#define n 3
void show(int *a){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
           printf("%d ",a[i]);
        printf("\n");
  }
}

int main(){
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
          scanf("%d",&a[i][j]);
    }
	show(a);
	getch();
	return 0;
}
