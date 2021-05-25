#include<stdio.h>
#include<string.h>
int main()
{
    char str[]={"DIWUwIFGwffuwifgiuwgwlrjvnwXWMCNkwweviNWI"};
    int i;
    for(i=0;i<strlen(str);i++)
    {
    if(str[i]>='b'&&str[i]<='z')
    {str[i]='z'+'a'-str[i];}
    else if(str[i]>='B'&&str[i]<='Z')
    {str[i]='Z'+'A'-str[i];}
    }
    for(i=0;i<strlen(str);i++)
    printf("%c",str[i]);
}