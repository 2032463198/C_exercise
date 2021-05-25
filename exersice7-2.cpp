#include<math.h>
double A(double a,double b,double c)
{
    double x0[2]={(b+sqrt(b*b-4*a*c))/2/a,(b-sqrt(b*b-4*a*c))/2/a};
    return(x0);
}

double B(double a,double b,double c)
{
    return(b/2/a);
}

char C(double a,double b,double c)
{
    char i;
    char x0[2]={(b+i*sqrt(b*b-4*a*c))/2/a,(b-i*sqrt(b*b-4*a*c))/2/a};
    return(x0);
}

#include<stdio.h>
#include<math.h>
int main()
{
    double A(double a,double b,double c),B(double a,double b,double c);
    double a,b,c;
    char i,C(double a,double b,double c);
    printf("please input a,b,c:\n");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    if(b*b-4*a*c>0)
    {printf("%lf",A(a,b,c));}
    else if(b*b-4*a*c==0)
    {printf("%lf",B(a,b,c));}
    else
    {printf("%lf",C(a,b,c));}
}