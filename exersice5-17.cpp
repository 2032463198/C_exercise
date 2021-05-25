#include<stdio.h>
int main()
{
    char jia[]={'A','B','C'},yi[]={'X','Y','Z'};
    int i,j,k;
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
         for(k=0;k<3;k++)
     {
         if(i!=0&&k!=0&&k!=2&&i!=j&&j!=k&&k!=i)
         {
             printf("%c play with %c\n",jia[0],yi[i]);
             printf("%c play with %c\n",jia[1],yi[j]);
             printf("%c play with %c\n",jia[2],yi[k]);
         }
     }
     }
    }
}
