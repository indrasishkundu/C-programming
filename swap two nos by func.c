/*swap two nos by using func*/
#include<stdio.h>
void swap(int *x,int *y);
main()
{
	int a,b;
	printf("\n Enter two values-->");
	scanf("%d%d",&a,&b);
	printf("Before swap %d   %d",a,b);
	swap(&a,&b);
	printf("After swap  %d   %d",a,b);
}
void swap(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
}
