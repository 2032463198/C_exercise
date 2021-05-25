#include<stdio.h>
int main()
{
    int a,b,c,*t,*A,*B,*C;
    printf("please input 3 ints:\n");
    scanf("%d%d%d",&a,&b,&c);
    A=&a;B=&b;C=&c;
    if(*A>*B)
    {t=A;A=B;B=t;}
    if(*A>*C)
    {t=A;A=C;C=t;}
    if(*B>*C)
    {t=B;B=C;C=t;}
    printf("%d<%d<%d\n",*A,*B,*C);
}