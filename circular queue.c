/*circular Queue*/
#include<stdio.h>
#define max 6 
int cq[6],f=-1,r=-1;
char ans;
void insertion();
void deletion();
void display();
main()
{
	int ch;
	while(1)
	{
		printf("\n MENU OF QUEUE CIRCUALR \n 1.insertion \n 2.deletion \n 3.display \n 4.exit \n enter your choice--");
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
    int item;
    while(1)
    {
    if(f==(r+1)%max)
    {
        printf("\n Queue overflow, no insertion!");
        return;
    }
        printf("\nEnter the value you want to insert-->\t");
        scanf("%d", &item);
        r =(r+1)%max;
        cq[r]=item;
         if(f==-1)
        {
        f=r;
        }
        printf("\n Do you want to continue?---");
        fflush(stdin);
        scanf("%c", &ans);
        if(ans!='y')
        return;
    }
}
    void deletion()
{
	while(1)
	{
     if(f==-1)
     {
        printf("\n Queue is empty,no deletion....\n");
        return;
     }
     else
     {
         printf("\n The DELETED item is-->%d\t",cq[f]);
         if(f==r)
         {
             f=-1;
             r=-1;
         }
         else
         {
             f=(f+1)%max;
         }
     printf("\n Do you wanna continue-->");
     fflush(stdin);
	 scanf("%c",&ans);
	 if (ans!='y')
	 return;     
     } 
   }
}  
void display()
{
  int i;
    if(f==-1 && r==-1)
    {
        printf("\n QUEUE is EMPTY");
    }
    else
    {
        printf("\n The Queue elements are-->");
        if(f<r)
        {
            for(i=f; i<r; i++)
            {
                printf("%d\t", cq[i]);
            }
        }
        else
        {
            for(i=0; i<r; i++)
            {
                printf("|%d| \t", cq[i]);
            }
            for(i=f; i<max; i++)
            {
                printf("|%d| \t", cq[i]);
            }
        }
    }
}
