#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void addlast();
void addstart();
void addpos();
void disp();
void length();
void delstart();
void dellast();
void delpos();
void create();
void addafter();
void addbef();
void del();
void delbef();
void delafter();

int data;

struct node
{
    int info;
    struct node *link;
}*start=NULL;



void main()
{
    int ch;
    while(1)
    {
        printf("\n::Singly Linked List Operations::\n Read instruction and enter your choice::\n");
        printf("\n1:- To create link list:");
        printf("\n2:-Add to Begining");
        printf("\n3:-Add to Last");
        printf("\n4:-Add to position");
        printf("\n5:-Length i.e No. of nodes::");
        printf("\n6:-Display");
        printf("\n7:-Delete from Begining");
        printf("\n8:-Delete from Last");
        printf("\n9:-Delete from Position");
        printf("\n 10.to insert after an element::");
        printf("\n 11.to insert Before an element::");
        printf("\n 12 . To delete element  in List::");
        printf("\n 13 . To delete before element ::");
        printf("\n 14 . To delete after element ::");
        printf("\n15:-Quit / Exit From Program");

        printf("\n \t\t\t::pls sir enter your choice ( 1 to 15 ):\t");
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
            addpos();
            break;
        case 5:
           length();
            break;
        case 6:
            disp();
            break;
        case 7:
            delstart();
            break;
        case 8:
            dellast();
            break;
       case 9:
            delpos();
            break;
        case 10:
            addafter();
            break;
        case 11:
            addbef();
            break;
        case 12:
            del();
            break;
        case 13:
            delbef();
            break;
        case 14:
            delafter();
            break;
        case 15:
            exit(0);

        default:
            printf("\n\t\t\t:::INVALID CHOICE:::");
        }


    }

}

void create()
{

    if(start!=NULL)
    {
        printf("\n \t\tSorry ! Linked list Already Creatred    ");
    }
    else
    {
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter your data::");
        scanf("%d",&data);
        temp->info=data;
        temp->link=start;
        start=temp;

    }
}


void addlast()
{

if(start==NULL)
{
    printf("\n \t\t list is not created::");

}
else
{
    struct node *temp, *p;
    temp=(struct node *)malloc(sizeof(struct node));

    printf("\n ENter your  Data::");
    scanf("%d",&data);
    temp->info=data;
    p=start;

    while(p->link != NULL)
    {
        p = p-> link;
    }
    p->link=temp;
    temp->link=NULL;
}

}



void addstart()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\n enter your data::");
    scanf("%d",&data);
    temp->info=data;
    temp->link=start;
    start=temp;


}

void addpos()
{
    int pos,i=1;
    struct node *temp, *p;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\n Enter your data::");
    scanf("%d",&data);
    printf("\n Enter the position::\t");
    scanf("%d",&pos);
    temp->info=data;
    if(pos==1)
    {
        temp->link=start;
        start=temp;
    }
    else
    {
        p = start;
        while(i<pos-1&&p!=NULL)
        {
            p=p->link;
            i++;
        }
        if(p==NULL)
            printf("\n there is only %d element exists",pos);
        else
        {
            temp->link=p->link;
            p->link=temp;
        }

    }
}


void disp()
{

    struct node *p;
    if(start==NULL)
    {
        printf("\n \t\tLink list is empty::\t");
    }
    else
    {
        p=start;
        printf("\n List element are::\n");
        while(p!=NULL)
        {
            printf("\t%d",p->info);
            p=p->link;
        }
    }



}

void length()
{
    struct node *p;
    int c=0;
    if(start==NULL)
    {
        printf("\n Length of link list::",c);
    }
    else
    {
        p=start;
        while(p!=NULL)
        {
        p=p->link;
        c++;
        }
        printf("\n Length of node=\t %d",c);
    }

}

void delstart()
{
    if(start==NULL)
    {
        printf("\n \t\t List ois empty");
    }
    else
    {

    struct node *temp;
    temp=start;
    start=start->link;
    free(temp);
    }

}

void dellast()
{
        struct node *temp,*t;

    if(start==NULL)
    {
        printf("\n \t\t List is empty");
    }
    else if(start->link==NULL)
    {
      temp=start;
     start=start->link;
      free(temp);

    }
    else
    {


            temp=start;
            while(temp->link!=NULL)
            {
                t=temp;
                temp=temp->link;

            }
            free(t->link);
            t->link=NULL;



    }


}

void delpos()
{


    if(start==NULL)
    {
        printf("\n \t\t List is empty");
    }
    else
    {
    int pos,i=1;
    struct node *p,*temp;
    printf("\n Enter the position To delete::\t");
    scanf("%d",&pos);
    p=start;
        while(i<pos-1&&p!=NULL)
        {
            p=p->link;
            i++;

        }
        if(p==NULL)
        {
            printf("\n there are less than %d node",pos);
        }
        else
        {
            temp=p->link;
            p->link=temp->link;
            free(temp);
        }


    }

}


 void addafter()
{
    if(start==NULL)
    {
        printf("\n Link list not created yet!!");
    }
    else
    {
         struct node *temp,*p;
         temp=(struct node *)malloc(sizeof(struct node));
        int item,ins,i=1;
        printf("\n Enter the element after which u wants to insert::\t");
        scanf("%d",&item);
        printf("\n enter the data to insert::");
        scanf("%d",&ins);

        p=start;
        temp->info=ins;




            while(p!=NULL)
            {

               if(p->info==item)
               {

                temp->link=p->link;
                p->link=temp;
                break;
               }
               else
                {
                  p=p->link;

                }
            }
            if(p==NULL)
            printf("\n \t\t\t::% d not found in list::",item);



    }
}




void addbef()
{
    if(start==NULL)
    {
        printf("\n Link list not created yet!!");
    }
    else
    {
         struct node *temp,*p;
         temp=(struct node *)malloc(sizeof(struct node));
        int item,ins,i=1;
        printf("\n Enter the element Before which u wants to insert::\t");
        scanf("%d",&item);
        printf("\n enter the data to insert::");
        scanf("%d",&ins);

        p=start;
        temp->info=ins;
        if(p->info==item)
        {
        	temp->link=start;
        	start=temp;
		}
		else
		{
		

          while(p!=NULL)
        {

            if(p->link->info==item)
            {

                temp->link=p->link;
                p->link=temp;
                break;
            }
            else
            {
                p=p->link;

            }


        }
    }


   }

 }


 void del()
 {
     int item,i;
     printf("\n Enter the item to delete::");
     scanf("%d",&item);
     struct node *temp,*p;
     p=start;
     if(p==NULL)
        printf("\n list is empty:;");
    /*else if(p->link==NULL)
     {
         if(p->info==item)
            temp=start;
            start=start->link;
            free(temp);
     }*/
     else
     {

     while(p!=NULL)
     {
         if(p->info==item)
         {
            temp=p;
            p=temp->link;
            free(temp);
            break;

         }
         else
         {
             p=p->link;
         }
         if(p==NULL)
         {
             printf("\n \t\t\t\t %d is not found in list ::",item);
         }

       }
    }






 }

 void delbef()
 {
     int item;
     printf("\n Enter the element before which u want to  delete::");
     scanf("%d",&item);
     struct node *temp,*p;
     p=start;
     if(p==NULL)
     {
         printf("\n link list is empty");
     }
     else if(p->info==item)
     {
         printf("\n %d is found in first position so  before deletion cann't be possible");
     }
     else if(p->link->info==item)
     {
         temp=p;
         start=p->link;
         free(temp);

     }
     else
     {
         while(p!=NULL)
         {
             if(p->link->link->info==item)
             {
                 temp=p->link;
                 p->link=temp->link;
                 free(temp);
                 break;

             }
             else
             {
                 p=p->link;
             }
         }
     }

 }




 void delafter()
 {
     int item;
     printf("\n Enter the element after which u want to delete::");
     scanf("%d",&item);
     struct node *temp,*p;
     p=start;
     if(p==NULL)
     {
         printf("\n link list is empty");
     }
     else if(p->link==NULL)
     {
         printf("\n opps!!!there is only one element");
     }
     else
     {
         while(p->link!=NULL)
         {
             if(p->info==item)
             {
                 temp=p->link;
                 p->link=temp->link;
                 free(temp);
                 break;
             }
             else
             {
                 p=p->link;
             }

         }
         if(p->link==NULL)
         {
             printf("\n\t\t\t\t %d is last element so after deletion is not possible");
         }

     }
 }









