/*double linked list*/
#include<stdio.h>
#include<malloc.h>
struct node
{
	struct node*llink;
	int data;
	struct node*rlink;
	
}*head=NULL,*p,*t;
void create();
void display();
main()
{
	int ch;
	while(1)
	{
			printf("\n ****Menu**** \n 1.create \n 2.display \n 3.exit \n enter your choice--");
		    scanf("%d",&ch);
	  switch(ch)
    	{
	    	case 1: create();
		            break;
	    	case 2: display();
		            break; 
		    case 3:return 0;        
	     	default: printf(" \n enter your choice--");	   	           
	    }
	}
}
void create()
{
	char ans;
	while(1)
	{
			t=(struct node*)malloc(sizeof(struct node));
		printf("enter data---");
		scanf("%d",&t->data);
		t->rlink=NULL;
		if(head==NULL)
		{
			t->llink=NULL;
			head=t;
		}
		else
		{
			p=head;
			while(p->rlink!=NULL)
			{
				p=p->rlink;
			}
			t->llink=p;
			p->rlink=t;
		}
		printf("do u want to continue---");
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
	if(head==NULL)
	{
		printf("\n no display");
		return;	
	}
	p=head;
	while(p!=NULL)
	{
		printf("<=>|%d|<=>",p->data);
		p=p->rlink;
	}
}
