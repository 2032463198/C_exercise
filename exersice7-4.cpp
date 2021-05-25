#include<stdio.h>
#include<string.h>
void Transpose(int a[3][3])
{
    int i,j,t;
    for(i=0;i<3;i++)
    {
        for(j=i;j<3;j++)
        {t=a[i][j];a[i][j]=a[j][i];a[j][i]=t;}
    }
}

int main()
{
    int i,j,a[3][3]={{1,2,3},{4,5,6},{7,8,9}},b[3][3];
    Transpose(a);
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
    {printf("%d ",a[i][j]);}
    printf("\n");}
}