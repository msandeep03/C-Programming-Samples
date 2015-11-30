#include <stdio.h>
#include <conio.h>

int show(int *a, int n)
{
	if(n==0)
		return 0;;
	printf("%d\n",a[n]);
	show(a,n-1);
}

int read(int *a, int n)
{
	if(n==0)
		return 0;

	scanf("%d",&a[n]);
	read(a,n-1);
}

int main()
{
	int a[5],n=5;
	read(a,n);
	show(a,n);
getch();
return 0;
}
