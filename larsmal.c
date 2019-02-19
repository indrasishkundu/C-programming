/*a c prog to find max or min bet them*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("\n Enter the values of a and b--> ");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("a=%d is the largest no and b=%d is smallest no",a,b);
	}
	else
	{
		printf("b=%d is the largest no and a=%d is the smallest no",b,a);
			
	}
	getch();
	return 0;
}
