//queue ll 
#include<stdio.h>
#include<malloc.h>
struct node
{
 int data;
 struct node*link;
}*head=NULL,*t,*F,*R;
void insert();
void del();
void display();
char ans;

main()
{
    int ch;
    while(1) // while(1!=0) we can use any no: without 0//
    {
        printf("\n.......this is the program of normal QUEUE.......\n");
        printf("\n1.Insert item\n2.Delete item\n3.Display\n4.EXIT\n ENTER YOUR CHOISE from 1 to 4-->\t");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: insert();
                    break;
            case 2: del();
                    break;
            case 3: display();
                    break;
            case 4: return 0;
            
            default:printf("\n ****OPPs SORRY ENTER YOUR CHOISE FROM 1 to 4****\n");
        } //End of switch//
    } //End of while loop//
} // End of main()//

void insert()
{
    while(1)
    {
       t =(struct node*)malloc(sizeof(struct node));
       printf("\n enter data->\t");
       scanf("%d",& t->data);
       t->link=NULL;
       if(F==NULL && R==NULL)
       {
          F=t;
          R=t;
       }
       else
       {
        R->link=t;
        R=t;
       }
       printf("\n Do you want to CONTINUE?\n y(Yes)\n n(No)\n");
                fflush(stdin);
                scanf("%c", &ans);
                if(ans!='y')
                return;
     }
}

void del()
{
  while(1)
  {
    if(F==NULL && R==NULL)
    {
        printf("\n*****No deletion possible*****");
        return;
    }
    else if(F==R)
      {
        printf("\n Deleted item is->\t %d", R->data);
        t=R;
        F=NULL;
        R=NULL;
        free(t);
      }
    else
        {
          t==F;
          printf("\n Delete item->\t %d", F->data);
          F=F->link;
          free(t);
        }
        printf("\n Do you want to continue?");
        fflush(stdin);
        scanf("%c",&ans);
        if(ans!='y')
        return;
   }
}

void display()
{
    if(t==NULL)
    {
        printf("\n****No item to display****\n");
        return;
    t=F;
    while(t!=NULL)
    {
        printf("\t %d", t->data);
        t=t->link;
    }
    }
}
