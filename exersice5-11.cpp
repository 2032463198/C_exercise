#include<stdio.h>
int main()
{
    int t=1;
    double h,H=100;
    for(h=100;t<=10;t++)
    {
        h=h/2;
        H=H+h;
    }
    printf("H=%lf,h=%lf",H,h);
}