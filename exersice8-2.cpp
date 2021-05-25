#include<stdio.h>
#include<stdlib.h>
void input(int *a)
{
    int i;
    printf("please input 10 ints(space off):\n");
    for(i=0;;i++)
    {
        scanf("%d",&a[i]);
        if(getchar()=='\n')
        break;
    }

}

void exchange(int *a)
{
    int i,min=*a,max=*a,t,j,j2;
    for(i=1;i<10;i++)
    {
        if(*(a+i)<min)
        {min=*(a+i);j=i;}
        else if(*(a+i)>max)
        {max=*(a+i);j2=i;}
    }
    t=*(a+9);*(a+9)=*(a+j2);*(a+j2)=t;
    t=*a;*a=*(a+j);*(a+j)=t;
}

void output(int *a)
{
    int i;
    for(i=0;i<10;i++)
    printf("%d ",*(a+i));
}

int main()
{
    void input(int *a);
    void exchange(int *a);
    void output(int *a);
    int *A;
    input(A);
    exchange(A);
    output(A);
}