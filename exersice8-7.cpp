#include<stdio.h>
int main()
{
    void take(int m,char *a,char *b);
    int m,i;
    char a[]="JHWwdjlDWHo248956372",b[21];
    take(m,a,b);
    printf("%d\n",m-1);
    for(i=m-1;i<21;i++)
    printf("%c ",*(b+i));
    printf("%c ",*(b+10));
}

void take(int m,char *a,char *b)
{
    int i;
    printf("please input m (m<20):\n");
    scanf("%d",&m);
    for(i=m-1;*(a+i)!='\0';i++)
         {*(b+i)=*(a+i);}
    *(b+i)='\0';
    printf("%d\n",m-1);
}