#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]={"IWFEIBIWC"},str2[]={"sdkvfgbsjkdg"},str3[strlen(str1)+strlen(str2)];
    int i;
    for(i=0;i<strlen(str1);i++)
    {
        str3[i]=str1[i];
    }
    for(i=strlen(str1);i<strlen(str1)+strlen(str2);i++)
    {
        str3[i]=str2[i-strlen(str1)];
    }
    printf("%s\n",str3);
}