#include<stdio.h>
int main()
{
    int score;
    char level;
    char f(int score);
    printf("please input score(int)\n");
    scanf("%d",&score);
    level=f(score);
    printf("%c\n",level);
}
char f(int score)
{
    char level;
    if(score<60)
        level='E';
    else if(60<=score&&score<70)
        level='D';
    else if(70<=score&&score<80)
        level='C';
    else if(80<=score&&score<90)
        level='B';
    else
        level='A';
    return(level);
}