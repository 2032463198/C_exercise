#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n;

int main()
{
    void write(char (*str)[99]);
    void read(char (*str)[99]);
    void exchange(char (*str)[99]);
    char (*str)[99];
    int i;
    write(str);
    read(str);
    exchange(str);
    for(i=0;i<n+1;i++)
        printf("%s\n",*(str+i));
}

void write(char (*str)[99])
{
    int i,j;
    FILE *fp;
    fp=fopen("strings.txt","w");
    printf("number of strings:\n");
    scanf("%d",&n);
    printf("please input %d strings:\n",n);
    for(i=0;i<n+1;i++)
    {
        gets(*(str+i));
        fputs(*(str+i),fp);
        fputs("\n",fp);
    }
    fclose(fp);
}

void read(char (*str)[99])
{
    int i;
    FILE *fp;
    fp=fopen("strings.txt","w");
    for(i=0;i<n+1;i++)
        fgets(*(str+i),99,fp);
    fclose(fp);
}

void exchange(char (*str)[99])
{
    int i,j;
    for(i=0;i<n+1;i++)
        for(j=0;j<strlen(*(str+i));j++)
        {
            if(*(str[j]+i)<='z'&&*(str[j]+i)>='a')
                *(str[j]+i)=*(str[j]+i)-32;
            else if(*(str[j]+i)<='Z'&&*(str[j]+i)>='A')
                *(str[j]+i)=*(str[j]+i)+32;
        }
}