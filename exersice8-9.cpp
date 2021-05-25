#include<stdio.h>
int main()
{
    void transpose(int (*a)[3]);
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j;
    transpose(A);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}

void transpose(int (*a)[3])
{
    int i,j,t;
    for(i=0;i<3;i++)
        for(j=0;j<i;j++)
        {
            t=*(*(a+i)+j);
            *(*(a+i)+j)=*(*(a+j)+i);
            *(*(a+j)+i)=t;
        }
}