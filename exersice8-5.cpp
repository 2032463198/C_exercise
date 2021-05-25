#include<stdio.h>
int main()
{
    int a[999],*p=a,i,n,res=n,numoff=1;
    printf("please input an integer n(1<n<1000):\n");
    scanf("%d",&n);
      for(i=1;res!=1;i++)
      {
        if(i==n+1)
        i=1;

        if(*(p+i)!=0)
        numoff++;
        else continue;

        if(numoff==3)
        *(p+i)=0;res--;numoff=0;
      }
    printf("the remaining one is %d\n",i);
}                                                                                         