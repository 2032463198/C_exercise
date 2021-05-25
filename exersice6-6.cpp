#include<stdio.h>
int main()
{
    int a[10][11]={{0,1,0,0,0,0,0,0,0,0,0}},i,j;
    for(i=1;i<10;i++)
    {
        for(j=1;j<11;j++)
       {a[i][j]=a[i-1][j-1]+a[i-1][j];}
    }
    printf("%d\n\n",a[0][0]);
    for(i=0;i<10;i++)
    {for(j=1;j<11;j++)
    printf("%-2d ",a[i][j]);
    printf("\n");}
}