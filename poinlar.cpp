#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10],*p,i,l;
	for(i=0;i<10;i++)
	{
	printf("\n enter a number to array--");
    scanf("%d",&a[i]);	
	}
	p=&a[0];
	l=*p;
	for(i=0;i<10;i++)
	{
		if(l<*(p+i))
			l=*(p+i);
	}
	printf("\n %d is the largest no",l);
	getch();
	return 0;
	
}
