/*write a c program to find cube of any number*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	int s;
	//clrscr();
	printf("enter the no:-->");
	scanf("%d",&s);
	s=pow(s,3);
	printf("the cube of the following no is-->%d",s);
	getch();
	return 0;
}

