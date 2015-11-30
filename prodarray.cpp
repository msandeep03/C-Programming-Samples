#include <stdio.h>
#include <conio.h>

int main(){
	int a[]={10, 3, 5, 6, 2};
	for(int i=0;i<5;i++){
		int prod=1;
	    for(int j=0;j<5;j++){
            if(a[i]==a[j])
				continue;
			else 
				prod=prod*a[j];
		}
		printf("%d\n", prod);
	}
	getch();
	return 0;
}
