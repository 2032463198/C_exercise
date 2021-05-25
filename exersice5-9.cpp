#include<stdio.h>
int main()
{
    int i,I,j,k,str[499];
    for(i=1;i<=1000;i++)
    {
        I=0;k=0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                str[k]=j;
                I=I+j;
                k++;
            }
        }
        if(i==I)
        {
        printf("\n%d its factor are: ",i);
        for(j=0;j<k;j++)
        {printf("%d,",str[j]);}
        }
    }
}