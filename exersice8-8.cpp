#include<stdio.h>
#include<string.h>
int main()
{
    int i,ca,lo,sp,nu,other;
    char *a;
    printf("please input a string:\n");
    gets(a);
    /*for(i=0;*(a+i)!='\n';i++)
        scanf("%c",&a[i]);*/
    for(i=0;i<strlen(a);i++)
    {
        if(*(a+i)>='A'&&*(a+i)<='Z')
        ca++;
        else if(*(a+i)>='a'&&*(a+i)<='z')
        lo++;
        else if(*(a+i)=' ')
        sp++;
        else if(*(a+i)>='1'&&*(a+i)<='0')
        nu++;
        else
        other++;
    }
    for(i=0;i<strlen(a);i++)
    printf("there're %d capitals, %d lowercases, %d numbers, %d others\n",ca,lo,sp,nu,other);
}