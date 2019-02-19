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
	strrev(str1);
	strrev(str2);
	printf("\n Strings after reversion...\n");
	puts(str1);
	puts(str2);
	getch();
	return 0;
}
