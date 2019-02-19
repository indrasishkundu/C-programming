#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str1[50],str2[50];
	printf("\n Enter the string 1-->");
	gets(str1);
	printf("\n Enter the string 2-->");
	gets(str2);
	strupr(str1);
	strupr(str2);
	printf("\n Strings after upper case...\n");
	puts(str1);
	puts(str2);
	getch();
	return 0;
}
