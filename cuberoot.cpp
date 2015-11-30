#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	for(int i=1;i<=100;i++){
		float qroot = pow(i,1/3.);
		printf("%d = %f\n",i, qroot);
    }
    getch();
    return 0;
}
