#include<stdio.h>
#include<string.h>

//char name[]={"abcdefghij"};
//int number[]={4,6,2,7,5,8,1,3,9,0};

void input(int number[10],char name[10],int n)
{
    int i;
	printf("input number:\n");
    {for(i=0;i<10;i++)
    scanf("%d",&number[i]);}
	printf("input name:\n");
	scanf("%d",&name[i]);
    printf("input ID:\n");
    scanf("%d",&n);
}

void sort(char name[10])
{
    int i,j,t,number[10];
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
     {
        if(number[j+1]==i+1)
        {   t=name[i+1];
            name[i+1]=name[j+1];
            name[j+1]=t;
        }
     }
    }
}

char findname(int n)
{
    void sort(char name[10]);
    char name[10];
    int i;
    sort(name);
    return(name[n]);
}

int main()
{
    void sort(char name[]);
    char findname(int n),name[10];
    int n,i,number[10];
    input(number,name,n);
    sort(name);
    printf("name sorted by ID:\t%s\n",name);
    printf("name of the man is:\t%c",findname(n));
}
