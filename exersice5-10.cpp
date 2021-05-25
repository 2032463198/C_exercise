#include<stdio.h>
int main()
{
    double a(int n),n,i;
    double s=3.5;
    for(i=1;i<=18;i++)
    {
        s=s+a(1+i)/a(i);
    }
    printf("%lf\n",s);
}

double a(int n)
{
    double j=2,k=3,t;
    int i;
    for(i=2;i<=n;i++)
    {
        t=j;
        j=k;
        k=t+k;
    }
    return(k);
}