#include<stdio.h>
int main()
{
	char c[5]={'C','h','i','n','a'};
	c[5]=c[5]+4;
	putchar(c[5]);
	printf("%s",c);
}
