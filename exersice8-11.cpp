#include<stdio.h>
#include<string.h>
int main()
{
    char sort(char *a[10]);
    int i;
    char *a[10];
    char **A=a;
    printf("please input 10 isometric strings:\n");
    for(i=0;i<10;i++)
        scanf("%s",A+i);
    sort(A);
    for(i=0;i<10;i++)
    printf("%s\t",*(A+i));
}


char sort(char *a[10])
{
    int i,j;
    char *t;
    for(j=0;j<9;j++)
    {
        for(i=j+1;i<10;i++)
        {
            if(strcmp(*(a+j),*(a+i))<0)
            {t=*(a+i);*(a+i)=*(a+j);*(a+j)=t;}
        }
    }
    return 0;
}