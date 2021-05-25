#include<stdio.h>
int main()
{
    char str[]={"shdekfgGDEHFEUKSBCebhdfskh:;|+-#!wfhJDEWI    2479842   <>:?/&^  sadhDGASafdgjhka\n djsakfkDGQIWEFGIWFGgwefigw 37129846912356982347561          :]>?../.,./ehrf\n  12378946325792638562<>?,./,./,.duhfgiuaHDWQUIFGwi     ~!$#$%#$@%@$@&*(%$^fhwigOW"};
    int i,Lo=0,Ca=0,Ch=0,Sp=0;
    for(i=0;i<240;i++)
    {
    if(str[i]>='a'&&str[i]<='z')
    {Lo++;}
    else if(str[i]>='A'&&str[i]<='Z')
    {Ca++;}
    else if(str[i]==32)
    {Sp++;}
    else
    {Ch++;}
    }
    printf("Lo=%d,Ca=%d,Ch=%d,Sp=%d",Lo,Ca,Ch,Sp);
}