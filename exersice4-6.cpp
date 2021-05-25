#include<stdio.h>
int main()
{
    double x,y;
    double f(double x);
    printf("please input x\n");
    scanf("%lf",&x);
    y=f(x);
    printf("%lf\n",y);
}
double f(double x)
{
    double y;
    if(x<1)
    y=x;
    else if(1<=x<10)
    y=2*x-1;
    else
    y=3*x-11;
    return(y);
}