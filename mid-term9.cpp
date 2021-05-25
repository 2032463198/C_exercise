#include<stdio.h>
#include<math.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=100;i++)
    {
        sum=sum+i*pow(-1,i+1);
    }
    printf("%d\n",sum);
}