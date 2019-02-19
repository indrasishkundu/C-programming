#include<stdio.h>
int main()
{
	char a,b;
	int amount;
	printf("Enter the amount-->");
	scanf("%d",&amount);
	printf("\n do you have aadhard card?");
	fflush(stdin);
	scanf("%c",&a);
	printf("\n do you have bpl card?");
	fflush(stdin);
	scanf("%c",&b);
	if(b=='y')
	{
		if(a=='y')
		{
			printf("\n pay %f amount",amount*0.5);
		}
		else
		{
		printf("\n pay %f amount",amount*0.8);	
		}
	}
	else
	{
		printf("\n pay %d amount",amount);
	}
	getch();
	return 0;
}
