#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,b=0,c=0,d=0,i=0;
    char s[999];
    printf("please input some chars:\n");
    scanf("%[^\n]",s);
    for(i=0;i<strlen(s);i++)
    {
    if('a'<=s[i]&&s[i]<='z'||('A'<=s[i]&&s[i]<='Z'))
        {a++;}
    else if(s[i]==' ')
        {b++;}
    else if(s[i]>=48&&s[i]<=57)
        {c++;}
    else
        {d++;}
    }
    printf("there're %d letters,%d space,%d numbers,%d others\n",a,b,c,d);
}