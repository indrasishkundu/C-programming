//Normal Queue program using C//
#include<stdio.h>
#include<conio.h>

int q[5], max=5, front=-1, rear=-1;
void insert();
void delete();
void display();
char ans;
int add_item;
main()
{
    int ch;
    while(1) // while(1!=0) we can use any no: without 0//
    {
        printf("\n.......this is the program of normal QUEUE.......\n");
        printf("\n1.Insert item\n2.Delete item\n3.Display\n4.EXIT\n ENTER YOUR CHOICE-->\t");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: insert();
            break;
            case 2: delete();
            break;
            case 3: display();
            break;
            case 4: return;
            default:printf("\n 'OPPs SORRY ENTER YOUR CHOISE FROM 1 to 4'\n");
        } //End of switch//
    } //End of while loop//
} // End of main()//

    void insert()
    {
        while(1)
        {
            if(rear ==max-1)
                printf("\n Queue OVERFLOW, no SPACE TO INSERT\n");
            else
            {
                if(front==-1) //The Queue is empty initially//
                front = 0;
                printf("\n Enter the value you want to INSERT-->\t");
                scanf("%d", &add_item);
                rear = rear + 1;
                q[rear] = add_item;
                printf("\n Do you want to CONTINUE?\n y(Yes)\n n(No)\n");
                fflush(stdin);
                scanf("%c", &ans);
                if(ans!='y')
                    return;
            }
        }
    } // End of INSERTION//

    void delete()
    {
        {
          if(front==-1 || front > rear)
          {
            printf("\n Queue UNDERFLOW, No item to DELETE\n");
            return;
          }
           else
            {
             printf("\n The item DELETED from the Queue is-->%d\t", q[front]);
             front = front + 1;
            }
        }
    } //End of deletion//

    void display()
    {
        int i;
        if(front == -1)
            printf("\n Queue is empty\n");
        else
        {
            printf("\n The Queue is-->\t\t ");
            for(i =front; i<=rear; i++)
                {
                    if(i==front)
                    printf("\t Front--->|%d|", q[i]);
                    else
                        printf("|%d|", q[i]);
                    {
                    if(i==rear)
                    printf("<---Rear", q[i]);
                    }
                }
        }
    } //End of display//
