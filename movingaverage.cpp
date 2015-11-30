#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	srand(time(NULL));
	float avg=0;
	long n=0,c1=0,c2=0;
	do{
        static int sum=0;
        while(rand()%10!=0){
			n=rand()%1000;printf("%ld + %ld = ",n,sum);
			sum = n+sum;
			c1++;printf("%ld @ %ld\n",sum,c1);
		}
		printf("\t\t\t#%ld Average = %f\n\n",c2+1,(float)sum/c1);
		c2++;
	}while(n!=0);
    getch();
	return 0;
}
