#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,n,S=0;
    int f(int a,int n);
    printf("please input a,n\n");
    scanf("%d,%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        S=S+f(a,i);
    }
    printf("S=%d\n",S);
}

int f(int a,int n)
{
    int z=0,i;
    for(i=0;i<=n-1;i++)
    {
        z=z+a*pow(10,i);
    }
    return(z);
}