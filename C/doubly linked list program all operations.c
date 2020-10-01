#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void addstart();
void create();
void addlast();
void disfor();
void disrev();
void delstart();
void dellast();
void delitem();

struct node
{
    int info;
    int *left,*right;
};
struct node *start=NULL,*last=NULL;

void main()
{
    int ch;
    while(1)
    {
        printf("\n 1. To create doubly link list::");
        printf("\n 2. To insert from begining::");
        printf("\n 3. To insert to last");
        printf("\n 4. To Delete from start");
        printf("\n 5. To Delete from last");
        printf("\n 6. To display in FORWARD ");
        printf("\n 7. To display in REVERSE");
        printf("\n 8. delete by item");

        printf("\n 9.To Exit from program ");
        printf("\n\n enter your choice::");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                create();
                break;
            case 2:
                addstart();
                break;
            case 3:
                addlast();
                break;
            case 4:
                delstart();
                break;
            case 5:
                dellast();
                break;
            case 6:
                disfor();
                break;
            case 7:
                disrev();
                break;
            case 8:
                delitem();
                break;
            case 9:
                exit(0);

            default:
                printf("\n\t\t\t Invalid choice::\n \t\t\tchoose valid option::");

        }
    }
}

void create()
{
    if(start!=NULL)
    {
        printf("\n \t\t\t:::::DLL is already created:::::");
    }
    else
    {
        int item;
     printf("\n Enter element to insert::");
     scanf("%d",&item);
     struct node *temp;
     temp=(struct node *)malloc(sizeof(struct node));
     temp->info=item;
     temp->left=NULL;
     temp->right=NULL;
     start=temp;
     last=temp;


    }

}


void addstart()
{
    if(start==NULL)
    {
        printf("\n ::DLL IS NOT CREATED YET::");
    }
    else
    {
        int item;
        printf("\n Enter element to insert::");
        scanf("%d",&item);
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        temp->info=item;
        start->left=temp;
        temp->left=NULL;
        temp->right=start;
        start=temp;


    }
}


void addlast()
{
    if(start==NULL)
    {
        printf("\n \n \t:: DLL IS NOT CREATED YET:::");
    }
    else
    {
        int item;
        printf("\n Enter element to insert::");
        scanf("%d",&item);
        struct node *temp,*p;
        temp=(struct node *)malloc(sizeof(struct node));
        p=start;
        while(p->right!=NULL)
        {
            p=p->right;
        }
        temp->info=item;
        temp->right=NULL;
        temp->left=last;
        p->right=temp;
        last=temp;

    }

}



void disfor()
{
    if(start==NULL)
    {
        printf("\n ::DLL IS EMPTY::");
    }
    else
    {
        printf("\n DLL ELEMENTS ARE( IN forward ):::");
        struct node *p;
        p=start;
        while(p!=NULL)
        {
            printf("\t%d",p->info);
            p=p->right;
        }

    }

}


void disrev()
{
    if(start==NULL)
    {`
        printf("\n ::DLL IS EMPTY::");
    }
    else
    {
        printf("\n DLL ELEMENTS ARE(IN REVERSE ):::");
        struct node *p;
        p=last;
        while(p!=NULL)
        {
            printf(" \t%d ", p->info);
            p=p->left;


        }

    }

}


void delstart()
{
    if(start==NULL)
    {
        printf("\n \t :::DLL IS EMPTY:::");
    }
    else if(start->right==NULL)
    {
        start=last=NULL;
        free(start);
    }
    else
    {
        struct node *temp;
        temp=start;
        printf("\t\t::%d is deleted from first position::",start->info);
        start=start->right;
        start->left=NULL;
        free(temp);

    }
}


void dellast()
{
    if(start==NULL)
    {
        printf("\n DLL IS EMPTY");
    }
    else if(last==start)
    {
        start=last=NULL;
        free(last);

    }
    else
    {
        struct node *temp;
        temp=last;
        last=last->left;
        last->right=NULL;
        free(temp);
    }
}

void delitem()
{
    if(start==NULL)
    {
        printf("\n DLL IS EMPTY");
    }
    else
    {
        struct node *temp,*t;
        int item;
        printf("\n Enter element to insert::");
        scanf("%d",&item);
        t=start;
       while(t!=NULL)
       {
           if(t->info==item)
           {
               temp=t;
               t=t->right;
               if(last->info==item)
               {
                   last=last->left;
               }
               free(t);
           }
           else
           {
               t=t->right;
           }
       }printf("\n Not found in DLL son!!");
       if(t==NULL)
       {

       }

    }




}











