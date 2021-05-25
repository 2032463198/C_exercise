#include<stdio.h>
int main()
{
	float r,Pc,Sc,Sb,Vb,Vcl,pi=3.1415926;
	int h;
	printf("please input r and h\n");
	scanf("%f,%d",&r,&h);
	Pc=2*pi*r;
	Sc=pi*r*r;
	Sb=4*pi*r*r;
	Vb=3*pi*r*r*r/4;
	Vcl=Sc*h;
	printf("the perimeter of circle is %.2f\nthe size of circle is %.2f\nthe surface sice of ball is %.2f\n,the volume of ball is %.2f\nthe volume of cylinder is %.2f\n",Pc,Sc,Sb,Vb,Vcl);
}
