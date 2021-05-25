#include<stdio.h>
#include<string.h>
void sort(char s[10])
{
   int i,j,k,t;
   for(i=0;i<9;i++)
   {
      for(j=0;j<9-i&&s[j]!='\0';j++)
	  {
	     if(s[j]>s[j+1])
		 {
		   t=s[j];
		   s[j]=s[j+1];
		   s[j+1]=t;
		 }
	  }
   }
}
 
int main()
{
 char s[10];
 printf("please input some chars:\n");
 gets(s);
 sort(s);
 puts(s);
 
 return 0;
}