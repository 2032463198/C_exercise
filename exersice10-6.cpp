
#include<stdio.h>
#include<stdlib.h>
struct Student
	{
		int num;
		char name[99];
		int score[3];
        float aver_score;
	};

int main()
{
    int i,j;
    void input(struct Student stu[]);
    void output(struct Student stu[]);
    void average(struct Student stu[]);
    void sort(struct Student stu[]);
  	struct Student stu[5]={{1,"SB1",{59,57,58}},{2,"SB2",{58,59,59}},{3,"SB3",{58,57,58}},
	  {4,"SB4",{59,58,57}},{5,"SB5",{57,58,59}}};
    //input(stu);
    average(stu);
    sort(stu);
    output(stu);
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

void average(struct Student stu[])
{
    int j,i,sum;
    for(i=0;i<5;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        sum=sum+stu[i].score[j];
        stu[i].aver_score=sum/3;
    }
}

void output(struct Student stu[])
{
    int i;
    FILE *fp;
    fp=fopen("stu_sort.txt","w");
    for(i=0;i<5;i++)
    fwrite(&stu[i],sizeof(struct Student),1,fp);
    fclose(fp);
    printf("stu_sort.txt has been built in binary.\n");
}

void sort(struct Student stu[])
{
    int i,j,t;
    for(i=0;i<4;i++)
        for(j=i+1;j<5;j++)
            if(stu[i].aver_score>stu[j].aver_score)
            {t=stu[i].aver_score;
            stu[i].aver_score=stu[j].aver_score;
            stu[j].aver_score=t;}
}