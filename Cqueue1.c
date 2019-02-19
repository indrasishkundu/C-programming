#include<stdio.h>
#include<stdlib.h>

int cq[5], max=5, front=-1,rear=-1;
void insert();
void delete();
void display();
char ans;

main()
{
    int ch;
     while(1)
     {
          printf("\n.......this is the program of CIRCULAR QUEUE.......\n");
          printf("\n1.Insert item\n2.Delete item\n3.Display\n4.EXIT\n ENTER YOUR CHOISE-->\t");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: insert();
                    break;
            case 2: delete();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
                    break;
            default:
                    printf("\n.....'OPPs sorry enter your choise from 1 to 4'......");
                    break;
        } //end of switch//
     }  // end of while loop//
} //end of main()//

void insert()
{
    int item;
    while(1)
    {
    if(front==(rear+1)%max)
    {
        printf("\n....Queue OVERFLOW....");
        return;
    }
        printf("\nEnter the value you want to insert-->\t");
        scanf("%d", &item);
        rear =(rear+1)%max;
        cq[rear]=item;
         if(front==-1)
        {
        front=rear;
        }
        printf("\n Do you want to continue? \n y(Yes)\n n(No)\n");
        fflush(stdin);
        scanf("%c", &ans);
        if(ans!='y')
        return;
      }
} //end if insertion//

void delete()
{
     if(front==-1)
     {
        printf("\n....Queue is EMPTY no item to delete....\n");
     }
     else
     {
         printf("\n The DELETED item is-->%d\t",cq[front]);
         if(front==rear)
         {
             front=-1;
             rear=-1;
         }
         else
         {
             front=(front+1)%max;
         }
     }
}

void display()
{
    int i;
    if(front==-1)
    {
        printf("\n....QUEUE is EMPTY....");
    }
    else
    {
        printf("\n The Queue elements are-->\t\t");
        if(front<rear)
        {
            for(i=front; i<rear; i++)
            {
                printf("%d\t", cq[i]);
            }
        }
        else
        {
            for(i=0; i<rear; i++)
            {
                printf("%d\t", cq[i]);
            }
            for(i=front; i<max; i++)
            {
                printf("%d\t", cq[i]);
            }
        }
    }
}// end of display//
