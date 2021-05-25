#include<stdio.h>
int main()
{
    int n,i,t,j;
    int a[7]={2,6,9,15,25,67};
    printf("please input an int:");
    scanf("%d",&n);
    for(i=6;i>0;i--)
    {
        if(n>a[i-1]&&n<a[i])
        {for(j=7;j>i;j--)
        {
            a[j]=a[j-1];
        }
        a[i]=n;
        break;}
    }
    for(i=0;i<7;i++)
    printf("%d ",a[i]);
}