#include<stdio.h>
int main()
{
    float r=1.5,Pc,Sc,Sb,Vb,Vcl,pi=3.14159;
    int h=3;
    printf("please input r and h\n");
    scanf("%f,%d",&r,&h);
    Pc=2*pi*r;
    Sc=pi*r*r;
    Sb=4*pi*r*r;
    Vb=3*pi*r*r*r/4;
    Vcl=Pc*h;
    printf("the perimeter of circle is %f\nthe size ofcircle is %f\nthe surface size of ball is %f\nthe volume of ball is %f\nthe volume of cylinder is %f\n",Pc,Sc,Sb,Vb,Vcl);
}
