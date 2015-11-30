#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

void product_array2(int a[],int n)
{	int i;
	int prod=1,prod_array[n];
	/* we first store the product of all the numbers that lie to the left of a number in the array.
        For the first element the product of elements to the left is 1 */
	for(i=0;i<n;i++)
	{	printf("%d*",prod);
        prod_array[i]=prod;
		prod*=a[i];printf("%d = %d\n",a[i],prod);printf("%d\n", prod_array[i]);
	}
	prod=1;
	/* We multiply the product on the right of a number to the already stored product which gave us the product of
	numbers to the left . */
	printf("\n");
    for(i=n-1;i>=0;i--)
	{   printf("%d*",prod_array[i]);
		prod_array[i]*=prod;printf("%d = %d\n", prod,prod_array[i]);
		prod*=a[i];printf("%d\t", prod);
	}
	for(i=0;i<n;i++)
	{
		cout<<prod_array[i]<<" ";
	}
	cout<<endl;
}
int main()
{	int i;
	cout<<"enter size of array"<<endl;
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	product_array2(a,n);
	getch();
    return 0;
}
