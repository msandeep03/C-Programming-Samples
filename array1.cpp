#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100],b[100][100],c[100][100];
    static int n;
    scanf("%d",&n);
    //matrix 1
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
            {
                    scanf("%d",&a[i][j]);
            }        
    }         
    //matrix 2
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
            {
                    scanf("%d",&b[i][j]);
            }        
    }/*
    //matrix addition a[][],b[][]
    for(int i=0;i<n;i++)
    {
             for(int j=0;j<n;j++)
             {
                     c[i][j]=a[i][j]+b[i][j];        
             }       
    }
    //matrix transpose
    for(int i=0;i<n;i++)
    {
             for(int j=0;j<n;j++)
             {
                     a[i][j]=c[j][i];        
             }       
    }
    //print matrix c
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
            {
                    printf("%d\t",c[i][j]);
            }       printf("\n");    
    }*/
    /*
    //print transpose matrix
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
            {
                    printf("%d\t",a[i][j]);
            }    printf("\n");    
    }*/
    ///matrix multiplication
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
            {
                    c[i][j]=0;
                    for(int k=0;k<n;k++)
                    {
                            c[i][j]=c[i][j]+a[i][k]*b[k][j];   
                    }                    
                    //c[i][j]=(a[i][j]*b[j][i])+(a[i+1][j+1]*b[j+1][i+1]);   
            }        
    }
    //print matrix c
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
            {
                    printf("%d\t",c[i][j]);
            }    printf("\n");    
    }
    system("pause");     
}
