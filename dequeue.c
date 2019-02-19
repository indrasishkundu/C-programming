 /*dequeue*/
#include<stdio.h>
#define max 6
int dq[6],f=-1,r=-1;
char ans;
void insertion_along_rear();
void deletion_along_front();
void insertion_along_front();
void deletion_along_rear();
void display();
main()
{
	int ch;
	while(1)
	{
		printf("\n ****QUEUE MENU**** \n 1.insertion along rear \n 2.deletion along front \n 3.insertion along front \n 4.deletion along rear \n 5.display \n 6.exit \n enter your choice--");
		scanf("%d",&ch);
	  switch(ch)
    	{
	    	case 1: insertion_along_rear();
		            break;
	    	case 2: deletion_along_front();
		            break;
		    case 3: insertion_along_front();
		            break;
		    case 4: deletion_along_rear();
		            break;
		    case 5: display();
			        break;        
		    case 6:return;        
	     	default: printf(" \n enter your choice--");	   	           
	    }
	}
}
void insertion_along_rear()
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
		scanf("%d",&dq[r]);
		if (f==-1)
	  {
		f=r;
	  }
		printf("\n Do you wanna continue?-->");
		fflush(stdin);
		scanf("%c",&ans);
	   if(ans!='y')
		{
		return;	
	    }
	}
}
void deletion_along_front()
{
  while(1)
   {
		if (f==-1 && r==-1)
		{
			printf("\n Queue is empty, no deletion!");
			return;
		}
	    printf("\n Deleted item= %d",dq[f]);
	    if (f==r)
	    {
	    	f=-1;
	    	r=-1;
		}
		else
		f++;
		printf(" \n  do you want to continue?--");
		fflush(stdin);
		scanf("%c",&ans);
		if(ans!='y')
		{
		return;	
	    }
	}
}
void insertion_along_front()
{
	while(1)
	{
	   if (f<=0)
    	{
		 printf("No insertion along front!! :v ");
		 return;
     	}
     	if(f==-1)
     	{
     		f=0;
     		r=0;
		 }
		 else
		 f--;
    	printf("\n enter elements--->");
	    scanf("%d",&dq[f]);
	    printf(" \n do you wanna continue?-->");
	    fflush(stdin);
	    scanf("%c",&ans);
	    if(ans!='y')
		{
		return;	
	    }
   }
}
void deletion_along_rear()
{
	while(1)
	{
		
		if (f==-1 && r==-1)
		{
			printf("No deletion along rear!");
			return;
		}
		  printf("\n Deleted item= %d",dq[r]);
		if (f==r)
		{
			f=-1;
			r=-1;
		}
		else
		r--;
		printf("Do you wanna continue?--");
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
	    	printf(" |%d| \t",dq[i]);
		}
}
