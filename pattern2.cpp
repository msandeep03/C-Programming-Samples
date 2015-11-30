#include <stdio.h>
#include <conio.h>
int main(){
    int n=5;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++)
			printf(" ");
		for(int j=0;j<2*(n-i);j++)
		        printf("%d",i+1);
		printf("\n");
	}

	getch();
	return 0;
}
