/*factorial using func*/
#include<stdio.h>
void fact(int x); //func declaration
main()
{
	int a;
	printf("enter number-->");
	scanf("%d",&a);
	fact(a);
}
void fact(int x)
{
	int facto=1;
	while(x>0)
	{
		facto=facto*x;
		x=x-1;
	}
	printf("factorial =%d",facto);
}
