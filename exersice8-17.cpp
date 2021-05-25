#include<stdio.h>
#include<string.h>
int main()
{
    int Strcmp(char *a,char *b);
    char a[99],b[99];
    printf("please input string a:\n");
    gets(a);
    printf("please input string b:\n");
    gets(b);
    printf("%d\n",Strcmp(a,b));
}

int Strcmp(char *a,char *b)
{
    for(;;a++,b++)
    {
        if(*a<*b)
        return -1;
        else if(*a>*b)
        return 1;
        else if(*a==0)
        return 0;
    }
}