/*ordinary Queue 1*/
#include<stdio.h>
#define max 6 
int q[6],f=-1,r=-1;
char ans;
void insertion();
void deletion();
void display();
main()
{
	int ch;
	while(1)
	{
		printf("\n ****QUEUE MENU**** \n 1.insertion \n 2.deletion \n 3.display \n 4.exit \n enter your choice--");
		scanf("%d",&ch);
	  switch(ch)
    	{
	    	case 1: insertion();
		            break;
	    	case 2: deletion();
		            break;
		    case 3: display();
		            break;
		    case 4: return;
	     	default: printf(" \n enter your choice--");	   	           
	    }
	}
}
void insertion()
{
	while(1)
	{
		if (r==max-1)
		{
			printf("\n queue overflow,no insertion!");
			return;
		}
		r++;
		printf("\n enter the value-->");
		scanf("%d",&q[r]);
		if (f==-1)
	  {
		f=r;
	  }
		printf("\n Do you wanna continue?-->");
		fflush(stdin);
		scanf("%c",&ans);
		if (ans!='y')
		return;	
	}
	
}
void deletion()
{
	while(1)
	{
		if (f==-1 && r==-1)
		{
			printf("\n Queue is empty, no deletion!");
			return;
		}
	    printf("\n Deleted item= %d",q[f]);
	    if (f==r)
	    {
	    	f=-1;
	    	r=-1;
		}
		else
		   f++;
		printf("   do you want to continue?--");
		fflush(stdin);
		scanf("%c",&ans);
		if(ans!='y')
		{
		return;	
	    }
	}
}
void display()
{
        int i;
		if(f==-1)
		{
			printf("Queue is empty, no display!");
			return;
		}
		printf("the items are-- \n");
	    for(i=f;i<=r;i++)
	    {
	    	printf(" |%d|\t",q[i]);
		}
}
