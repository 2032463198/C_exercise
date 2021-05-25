#include<stdio.h>
#include<string.h>

void Connect(char str1[],char str2[],char str3[])
{
    int i,j;
    printf("input str1:\n");
    gets(str1);
    printf("input str2:\n");
    gets(str2);
    for(i=0;i<strlen(str1);i++)
    {str3[i]=str1[i];}
    for(j=0;j<strlen(str2);j++)
    {str3[strlen(str1)+j]=str2[j];}
    str3[strlen(str1)+j]='\0';
}

int main()
{
    void Connect(char str1[],char str2[],char str3[]);
    char str1[1000],str2[1000],str3[2000];
    Connect(str1,str2,str3);
    printf("str1 and str2 connected:\n%s\n",str3);
}
