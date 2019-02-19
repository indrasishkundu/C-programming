#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*link;
	
}*head=NULL,*p,*t,*q,*temp,*p1,*p2,*p3;
void create();
void node_count();
void searching();
void rev();
void display();
main()
{
	int ch;
	while(1)
	{
			printf("\n ****Menu**** \n 1.create \n 2.Node count \n 3.Searching \n 4.Physically reverse \n 5.Display \n 6.Exit \n enter your choice--");
		    scanf("%d",&ch);
	  switch(ch)
    	{
	    	case 1: create();
		            break;
		    case 2:node_count();
		           break;
			case 3:searching();
			       break;
			case 4:rev();
			       break;       
	    	case 5: display();
		            break;  
		    case 6:return 0;        
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
		t->link=NULL;
		if(head==NULL)
		{
			head=t;
		}
		else
		{
			p=head;
			while(p->link!=NULL)
			{
				p=p->link;
			}
			p->link=t;
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

void node_count()
{
	int count=0;
	p=head;
	while(p!=NULL)
	{
		p=p->link;
		count++;
	}
	printf("Total no of node--%d",count);
}

void searching()
{
	int val,count=1;
	printf("Enter the data to be searched-->");
	scanf("%d",&val);
	p=head;
	while(p!=NULL)
	{
		if(p->data==val)
		{
			printf("present at %d position",count);
		    return;
		}
		p=p->link;
		count++;
	}
	printf("Not present in the list");
}

void rev()
{
	p1=head;
	p2=NULL;
	p3=NULL;
	while(p1!=NULL)
	{
		p3=p2;
		p2=p1;
		p1=p1->link;
		p2->link=p3;
	}
	head=p2;	
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
		printf("|%d|->",p->data);
		p=p->link;
	}
}
