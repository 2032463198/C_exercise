int cd(int a,int b)
{
    int i,cd;
    if(a>b)
    {
    for(i=1;i<=b;i++)
    {
        i=i+1;
        if(a%i==0&&b%i==0)
       cd=i;
    }
    return(cd);
    }
else if(a<=b)
    {
     for(i=1;i<=a;i++)
    {
        i=i+1;
        if(a%i==0&&b%i==0)
       cd=i;
    }
    return(cd);
    }
}

int cm(int a,int b)
{
    int i;
   return(a*b/cd(a,b));
}

#include<stdio.h>
int main()
{
    int cd(int a,int b),cm(int a,int b);
    printf("%d\n",cd(12,16));
    printf("%d\n",cm(12,16));
}