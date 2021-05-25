#include<stdio.h>
int isprime(int a)
{
    int i,x=0;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {x=1;
        break;}
    }
    return(x);
}

int main()
{
    int isprime(int a),a;
    printf("please input an int:\n");
    scanf("%d",&a);
    if(isprime(a)==1)
    {printf("yes\n");}
    else
    {printf("no\n");}
}