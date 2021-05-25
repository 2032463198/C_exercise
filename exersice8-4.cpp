#include<stdio.h>

static int i;

void move(int *a,int m)
{
    int j,t;
    printf("please input n ints(space off):\n");
    for(i=0;i!='\n';i++)
        scanf("%d",&a[i]);
    printf("please input m:\n");
    scanf("%d",&m);
    if(m<=i/2)
    {
     for(j=0;j<m;j++)
     {t=*(a+j);*(a+j)=*(a+j+i-m);*(a+j+i-m)=t;}
    }
    else if(m>i/2)
     printf("not satisfied with m<n/2\n");
}

int main()
{
    void move(int *a,int m);
    int *a,m,j;
    move(a,m);
    for(j=0;j<i;j++)
    printf("%d ",*(a+j));
}