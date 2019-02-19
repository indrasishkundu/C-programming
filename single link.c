#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*link;
	
}*head=NULL,*p,*t,*q,*temp;
void create();
void insertion_at_begining();
void insertion_at_spec_pos();
void after_a_specific_node();
void del_at_last();
void del_at_begining();
void del_before_spec_node();
void del_after_spec_node();
void display();
main()
{
	int ch;
	while(1)
	{
			printf("\n ****Menu**** \n 1.create \n 2.insertion at begining \n 3.Insertion at a specific position \n 4.after a specific node \n 5.Deletion at last \n 6.Deletion at begining \n 7.Deletion before a specific node \n 8.Deletion after a specific node \n 9.Display \n 10.Exit \n enter your choice--");
		    scanf("%d",&ch);
	  switch(ch)
    	{
	    	case 1: create();
		            break;
		    case 2:insertion_at_begining();
			       break; 
			case 3:insertion_at_spec_pos();
			       break;	          
			case 4:after_a_specific_node();
			       break;
			case 5:del_at_last();
			       break;
			case 6:del_at_begining();
			       break;     
			case 7:del_before_spec_node();
			       break;  
			case 8:del_after_spec_node();
			       break;
	    	case 9: display();
		            break;  
		    case 10:return 0;        
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
void insertion_at_begining()
{
	if (head==NULL)
	{
		printf("\n Insertion not possible");
		return;
	}
	t=(struct node*)malloc(sizeof(struct node));
	printf("enter data---");
		scanf("%d",&t->data);
	t->link=head;
	head=t;	
}
void insertion_at_spec_pos()
{
	int pos,i;
	if (head==NULL)
	{
		printf("\n Insertion not possible at a specific node");
		return;
	}
	t=(struct node*)malloc(sizeof(struct node));
	printf("enter data---");
		scanf("%d",&t->data);
	p=head;
	printf("\n In which postion you want to insert-->");
	scanf("%d",&pos);
	if(pos==1)
	{
		t->link=head;
		head=t;
		return;
	}
	for(i=1;i<pos-1 && p!=NULL ;i++)
	{
		p=p->link;
	}
	t->link=p->link;
	p->link=t;
}
void after_a_specific_node()
{
	int val;
	if (head==NULL)
	{
		printf("\n Insertion not possible at a specific node");
		return;
	}
	t=(struct node*)malloc(sizeof(struct node));
	printf("\n enter specific data");
		scanf("%d",&t->data);
	printf("\n enter after which node you want to insert-->");	
	scanf("%d",&val);
	p=head;
	while(p->data!=val)
	{
		p=p->link;
	}
	t->link=p->link;
	p->link=t;
}
void del_at_last()
{
		if (head==NULL)
	{
		printf("\n no deletion ");
		return;
	}
	p=head;
	while(p->link->link!=NULL)
	{
		p=p->link;
	}
	temp=p->link;
	p->link=NULL;
	free(temp);
}
void del_at_begining()
{
		if (head==NULL)
	{
		printf("\n no deletion ");
		return;
	}
	p=head;
	head=head->link;
	free(p);
}
void del_before_spec_node()
{
	int val;
		if (head==NULL)
	{
		printf("\n no deletion ");
		return;
	}
	printf("\n Before which node you want to delete-->");
	scanf("%d",&val);
	p=head;
	q=NULL;
	while(p->link->data!=val)
	{
		q=p;
		p=p->link;
	}
	q->link=p->link;
	free(p);
}
void del_after_spec_node()
{
	int val;
		if (head==NULL)
	{
		printf("\n no deletion ");
		return;
	}
	printf("\n After which node you want to delete-->");
	scanf("%d",&val);
	p=head;
	while(p->data!=val && p!=NULL)
	{
		p=p->link;
	}
	temp=p->link;
	p->link=temp->link;
	free(temp);
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
