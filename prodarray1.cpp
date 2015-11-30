#include <stdio.h>
#include <conio.h>

int main(){
	int a[]={10, 3, 5, 6, 2};
	int prod=1;
	for(int i=0;i<5;i++)
		prod = prod*a[i];
	int temp;
	for(int i=0;i<5;i++){
		temp=prod/a[i];
		printf("%d\n",temp);
	}
	getch();
	return 0;
}
