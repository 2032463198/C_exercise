#include<stdio.h>
#include<string.h>
void space(char str[])
{
    int i;
    printf("please input a string:\n");
    gets(str);
    for(i=0;i<strlen(str);i++)
    printf("%c ",str[i]);
}

int main()
{
    void space(char str[]);
    char str[999];
    space(str);
}