#include<stdio.h>
#include<string.h>
int main()
{
    char sort(char (*a)[99]);
    int i;
    char a[10][99],(*A)[99];
    printf("please input 10 isometric strings:\n");
    for(i=0;i<10;i++)
        scanf("%s",a[i]);
    A=a;
    sort(A);
    for(i=0;i<10;i++)
    printf("%s\t",a[i]);
}


char sort(char (*a)[99])
{
    int i,j;
    char T[99],*t=T;
    for(j=0;j<9;j++)
    {
        for(i=0;i<9-j;i++)
        {
            if(strcmp(a[i],a[i+1])<0)
            {strcpy(t,a[i]);strcpy(a[i],a[i+1]);strcpy(a[i+1],t);}
        }
    }
}