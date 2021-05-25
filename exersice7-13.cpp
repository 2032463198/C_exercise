#include<stdio.h>

double Legendre(int n,double x)
{
    char NAN;
    if(n<0)
    {return(NAN);}
    else if(n==0)
    {return(1);}
    else if(n==1)
    {return(x);}
    else
    {
        return(((2*n-1)*x-Legendre(n-1,x)-(n-1)*Legendre(n-2,x))/n);
    }
}

int main()
{
    int n;
    double x;
    printf("please input n,x:\n");
    scanf("%d,%lf",&n,&x);
    printf("%lf\n",Legendre(n,x));
}