#include<stdio.h>
#include<conio.h>

int main ()
{
	int *p,n,i;
	long f=1;
	printf("\n enter a number to calculate a factorial of it--");
	scanf("%d",&n);
	p=&n;
	for(i=1;i<=*p;i++)
	{
		f=f*i;
	}
	printf("\n the factorial of %d! is--%ld",n,f);
	getch();
	return 0;
	
}
