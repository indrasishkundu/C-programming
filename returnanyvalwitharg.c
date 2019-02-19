#include<stdio.h>
#include<conio.h>

int sum (int,int);
int main()
{
	int a,b,s;
	printf("\n Enter the value of a and b---");
	scanf("%d%d", &a,&b);
	s=sum(a,b);
	printf("\n Sum is %d", s);
	getch();	
	return 0;
}

int sum(int x,int y)
{
	int s;
	s=x+y;
	return(s);
}
