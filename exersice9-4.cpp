
#include<stdio.h>

struct Student
	{
		int num;
		char name[99];
		int score[3];
	};

int main()
{
    int print(struct Student stu[]);
    void input(struct Student stu[]);
    struct Student stu[5];
  	input(stu);
    print(stu);
 
}
  
int print(struct Student stu[])
{
     int i,j;
	 for(i=0;i<5;i++)
	 { 
        printf("%d\t%s\t",stu[i].num,stu[i].name);	
	 	for(j=0;j<3;j++)
		printf("%d\t",stu[i].score[j]);
		printf("\n");	 
	 }
	 
}

void input(struct Student stu[])
{
    int i,j;
    printf("please input 5 IDs:\n");
    for(i=0;i<5;i++)
    scanf("%d",&stu[i].num);
    printf("please input 5 names:\n");
    for(i=0;i<5;i++)
    scanf("%s",&stu[i].name);
    for(i=0;i<5;i++)
    {
    printf("please input 3 scores of ID %d:\n",i);
        for(j=0;j<3;j++)
        scanf("%d",&stu[i].score[j]);
    }
}