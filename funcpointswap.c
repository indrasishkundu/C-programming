#include<stdio.h>
void swap(int *, int *);
 main()
{
	int a,b;
	printf("\n Enter the val of a & b--");
	scanf ("%d%d", &a,&b);
	swap(&a,&b);
	printf("\n After interchange, a=%d , b=%d",a ,b);
	getch();
	return 0;
}
void swap(int *x ,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}
