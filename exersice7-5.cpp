#include<stdio.h>
#include<string.h>
void Invert(char str[99])
{
    int i;
    char t;
        gets(str);
    for(i=0;i<strlen(str)/2;i++)
        {
            t=str[i];
            str[i]=str[strlen(str)-i-1];
            str[strlen(str)-i-1]=t;
        }
}

int main()
{
    int i;
    void Invert(char str[]);
    char str[99];
    printf("please input a string:\n");
    Invert(str);
    puts(str);
}