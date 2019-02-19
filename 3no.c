#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter three nos--->");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	{
		if(x>z)
		{
			printf("%d no is the biggest",x);
		}
		else
		{
			printf("%d is the biggest",z);
		}
	}
	else if(y>z)
	{
		printf("%d is biggest",y);
		
	}
	else
	{
		printf("%d is biggest",z);
	}
	return 0;
}
