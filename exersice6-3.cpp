#include<stdio.h>
int main()
{
    int a[3][3],i,j,n=0;
    printf("please input a 3*3 matrix:");
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);}
    for(i=0;i<3;i++)
    {
        n=n+a[i][i];
    }
    printf("n is %d",n);
}