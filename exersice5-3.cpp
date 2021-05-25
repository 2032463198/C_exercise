#include<stdio.h>
int main()
{
    int a,b,cd,cm,i,m;
    printf("please input two int>0\n");
    scanf("%d,%d",&a,&b);
if(a>b)
    for(i=1;i<=b;i++)
    {
        i=i+1;
        if(a%i==0&&b%i==0)
       cd=i;
    }
else if(a<b)
     for(i=1;i<=a;i++)
    {
        i=i+1;
        if(a%i==0&&b%i==0)
       cd=i;
    }
cm=a*b/cd;
printf("cd is %d,cm is %d\n",cd,cm);
}