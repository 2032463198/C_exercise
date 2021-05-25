#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    int i;
    char a[99];
    fp=fopen("test.txt","w");
    printf("please input a string end with exclamation mark:\n");
    for(i=0;;i++)
    {
        a[i]=getchar();
        if(a[i]=='!')
        {
        a[i]='\0';
        break;
        }
    }
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]<='z'&&a[i]>='a')
            a[i]=a[i]-32;
        else if(a[i]<='Z'&&a[i]>='A')
            a[i]=a[i]+32;
    }
    fputs(a,fp);
    fclose(fp);
    putchar(10);
    printf("'%s' has been written in test.txt\n",a);
    return 0;
}