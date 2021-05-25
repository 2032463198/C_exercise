#include<stdio.h>
#include<string.h>
int main()
{
    char str1[999],str2[999];
    puts("please input 2 strings:\n");
    gets(str1);
    gets(str2);
    if (strlen(str1)==1||strlen(str2)==1)
    {
        printf("%d\n",str1[0]-str2[0]);
    }
    else
    {
        printf("%d\n",str1[1]-str2[1]);
    }
}