/*a c prog to check even odd no*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int long a;
	printf("\n Enter a no to be checked--> ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("\n the no x=%d is EVEN...",a);
	}
	else
	{
		printf("\n the no x=%d is ODD...",a);
	}
	getch();
	return 0;	
}
