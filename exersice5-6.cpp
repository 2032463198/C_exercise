#include<stdio.h>
int main()
{
    int n;
    long long s=0,fac(int n);
    for(n=1;n<=20;n++)
    {
        s=s+fac(n);
    }
    printf("%lld\n",s);
}

long long fac(int n)
{
    int i;
    long long z=1;
    for(i=1;i<=n;i++)
    {
        z=z*i;
    }
    return(z);
}