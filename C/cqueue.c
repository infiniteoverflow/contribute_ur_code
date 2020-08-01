#include<stdio.h>
#define max 5

int front=-1, rear=-1;

int q[max];

void push();
void pop();
void display();

int main()
{
	int ch;

	while(1)
	{
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
		printf("\nEnter your choice:-");
		 scanf("%d",&ch);

	      switch(ch)
	      {
	      	case 1:
	      		{

	      			push();
	      			break;
	      		}
	      	case 2:
			  {
			  	pop();
			  	break;
			  }

	     case 3:
		 {
		 	display();
		 	break;

		 }
		 case 4:
		 {
		 	exit(0);
		 }
		 default:
		 	{
		 		printf("Invalid chioce");
		 	}


	}
}
}


void push()
{
    int item;
    printf("\nEnter the no:-");
    scanf("%d",&item);
	if((front== 0 && rear==max-1)||(front==rear+1))
	{
		printf("QUEUE is full");
		return;
	}
	else
    {


	 if(front==-1)
	{
		front=0;

	}
	if(rear==max-1)
	{
		rear=0;
		q[rear]=item;
	}
	else
	{
		rear=rear+1;
		q[rear]=item;
	}
    }
}



void pop()
{
	if(front==-1)
	{
		printf("QUEUE is empty");

	}
	else
    {


	if(front==rear)
	{
			printf("\nthe deleted item is:-%d",q[front]);
			front=rear=-1;

	}
	 if(front==max-1)
	{
		printf("\nthe deleted item is:- %d",q[front]);
		front=0;

	}
	else
	{
		printf("\nthe deleted item is:- %d",q[front]);
		front++;
	}
    }
}

void display()
{
    int i;
    if(front==-1)
        printf("\n Queue is empty");
    else
    {



     if(rear>=front)
    {
    		for(i=front;i<=rear;i++)
		{
			printf("%d",q[i]);
		}


    }
    else
    {



	   for(i=0;i<=rear;i++)
	   {
	   	printf("%d",q[i]);
	   }
	   for(i=front;i<=max-1;i++)
		{
			printf("%d",q[i]);
		}


    }

    }

}

