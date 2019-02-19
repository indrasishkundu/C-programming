//stack
#include<stdio.h>
int s[5],max=5,tos=-1;
char ans;
void push();
void pop();                                                          //func dec
void display();
main()
{
	int ch;
	while(1)               //while 1!=0 , anything that is not equal to 0 can be applied there except 0
	{
	printf("\n ****stack menu**** \n 1.push \n 2.pop \n 3.display \n 4.exit \n enter your choice--");
	scanf("%d",&ch);
	  switch(ch)
    	{
	    	case 1: push();
		            break;
	    	case 2: pop();
		            break;
		    case 3: display();
		            break;
		    case 4: return;
	     	default: printf(" \n enter your choice--");	   	           
	    }
    }
}
    void push()
    {
    	while (1)
    	{
    		if(tos==max-1)
    		{
    			printf("\n stack overflow, no push");
    			return;
			}
			tos++;
			printf("\n enter value---->");
			scanf("%d",&s[tos]);
			printf("do you want to continue?--");
			fflush(stdin);
			scanf("%c",&ans);
			if(ans!='y')
				return;
		}
	}
	void pop()
	{
		while(1)
		{
			if(tos==-1)
			{
				printf("\n stack underflow,no pop");
				return;
			}
			printf("Deleted item= %d",s[tos]);
			tos--;
			printf("do you want to continue?--");
			fflush(stdin);
			scanf("%c",&ans);
			if(ans!='y')
				return;
		}
	}
	void display()
	{
		int i;
		if(tos==-1)
		{
			printf("\n stack underflow, no display");
			return;
		}
		printf("\n items are--");
		for(i=tos;i>=0;i--)
		{
			printf("\n |%d|",s[i]);
		}
	}

