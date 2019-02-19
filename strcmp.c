#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	printf("\n Enter the string 1-->");
	gets(str1);
	printf("\n Enter the string 2-->");
	gets(str2);
	if(strcmp(str1,str2)==0)
	{
		printf("\n strings are equal...");
	}
	else
	{
		printf("\n strings are not equal...");
	}
	getch();
	return 0;
}
