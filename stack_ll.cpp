//stack using ll
#include<stdio.h>
#include<malloc.h>
struct node
{
 int data;
 struct node*link;
}
*tos=NULL,*p,*t;
char ans;
void push();
void pop();
void display();
main()
{
    int ch;
    while(1)
    {
        printf("\n.....THIS IS THE PROGRAM FOR STACK USING LINK LIST.....\n");
        printf("\n1. push\n2. pop\n3. display\n4. exit\n Enter your choice-->\t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: return 0;
            default: printf("\t\t****Enter your choice properly from 1 to 4****\t\t");

        }//end of switch//
    }//end of while//
}//end of main()//

void push()
{
    while(1)
    {
        t =(struct node*)malloc(sizeof(struct node));
        printf("\n enter data\t");
        scanf("%d",& t->data);
        if(tos==NULL)
        {
            tos=t;
            t->link=NULL;
        }
        else
        {
            t->link=tos;
            tos=t;
        }
        printf("\n Do you want to continue?");
        fflush(stdin);
        scanf("%c",& ans);
        if(ans!='y')
            return;
    }
}//end of push//

void pop()
{
    while(1)
    {
        if(tos==NULL)
        {
            printf("\n ****pop not possible****");
            return;
        }
        t=tos;
        printf("\n Deleted item is-->\t %d",tos->data);
        tos=tos->link;
        free(p);
        printf("\n Do you want to continue?");
        fflush(stdin);
        scanf("%c",&ans);
        if(ans!='y')
            return;
    }
}

void display()
{
    if(tos==NULL)
    {
       printf("\n****No item to display****\n");
       return;
    }
    p=tos;
    while(p!=NULL)
    {
       printf("\t %d",p->data);
       p=p->link;

    }
}
