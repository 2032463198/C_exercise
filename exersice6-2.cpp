#include<stdio.h>
int main()
{
    int a[10],i,j,t;
    printf("please input 10 numbers:");
    for(i=1;i<=10;i++)
    {scanf("%d",&a[i]);}
    printf("sort from the largest to the smallest is ");
    for(j=1;j<10;j++)
    {
    for(i=j;i<=10;i++)
    {
        if(a[i]>a[j])
        {
            t=a[i];a[i]=a[j];a[j]=t;
        }
    }
    printf("%d,",a[j]);
    }
}