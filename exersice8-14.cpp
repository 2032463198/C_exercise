#include<stdio.h>

static int i;

int main()
{
    int j;
    double *a;
    void inverse(double *A);
    printf("please input n numbers:\n");
    for(i=0;;i++)
    {
        scanf("%lf",&a[i]);
        if(getchar()=='\n')
        break;
    }
    inverse(a);
    for(j=0;j<i+1;j++)
        printf("%lf ",*(a+j));
}

void inverse(double *A)
{
    int j;
    double t;
    for(j=0;j<(i+1)/2;j++)
    {
        t=*(A+j);
        *(A+j)=*(A+i-j);
        *(A+i-j)=t;
    }
}