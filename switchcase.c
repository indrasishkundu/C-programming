#include<stdio.h>
int main()
{
	int x,y,ch;
	printf("enter two nos-->");
	scanf("%d%d",&x,&y);
	printf("what do you want to do \n1.Addition \2.Substraction \n3.Multiplication \n4.Division \n");
	scanf("%d",&ch);
	switch(ch)
    {
	case 1:printf("Addition=%d",(x+y));
	       break;
	case 2:printf("Substraction=%d",(x-y));
	       break;
	case 3:printf("Multiplication=%d",(x*y));
	       break;
	case 4:printf("Division=%f",(float)x/y);
	       break;
	default:printf("wrong input");
    }
	getch();
	return 0;
    
}

