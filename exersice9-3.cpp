
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
  	struct Student stu[5]={{1,"SB1",{59,57,58}},{2,"SB2",{58,59,59}},{3,"SB3",{58,57,58}},
	  {4,"SB4",{59,58,57}},{5,"SB5",{57,58,59}}};
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