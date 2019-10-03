#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;

class link
{
public:
	NODE *first, *last;
	link()
	{
		first=NULL;
		last=NULL;
	}
	void create();
	void display();
	void insert();
	void deleate();
	void search();
};

void link::create()
{
	NODE *temp;
	temp = new NODE;
	int n;
	cin>>n;   // enter the elemennt
	temp->data= n;
	temp->next=NULL;
	if(first ==NULL)
	{
		first=temp;
		last=first;
	}
	else
	{
		last->next=temp;
		last=temp;
	}
}

void link::display()
{
	NODE *temp;
	temp=first;
	if(temp==NULL)
		cout<<"link is empty"<<endl;
	while(temp!=NULL)
	{
		cout<< temp->data<<"     ";
		temp= temp->next;
	}
}
void link::insert()
{
    NODE *prev,*current, *temp;
    prev=NULL;
    current=first;
    int i=1, pos,n,choice;
    cin>>n;
    temp= new NODE;
    temp->data= n;
    temp->next=NULL;
    cout<<"\nINSERT AS\n1:FIRSTNODE\n2:LASTNODE\n3:IN BETWEEN FIRST&LAST NODES";
    cout<<"\nEnter Your Choice:";
    cin>>choice;
    switch(choice)
    {
        case 1: 
            temp->next=first;
            first=temp;
            break;
        case 2:
            last->next= temp;
            temp=last;
            break;
        case 3:
            cout<<"enter the position\n";
            cin>>pos;
            while(i!=pos)
            {
                prev=current;
                current=current->next;
                i++;
            }
            if(i==pos)
            {
                prev->next=temp;
                temp->next=current;
            }
            else
                cout<<"unsuccesfull insert";
            break;
    }
}

void link::deleate()
{
	NODE *prev, *after, *temp;
	prev=NULL;
	after= first;
	int n,pos,i=1,choice;
	cout<<"entr for the option 1.DEALETA FIRST  2,DEALEAT second       3.DE:LEATE IN MODLLE"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			if(first!= NULL)
			{
				cout<< "deleated elemnt is:  " << first->data;
				first= first->next;
			}
			else
				cout<<"cant delete";
			break;
		case 2: 
			while(after!= last)
			{
				prev= after;
				after=after->next;
			}
			if(after== last)
			{
				cout<< "the deleted elmnt is :  "<< after->data;
				prev->next=NULL;
				last= prev;
			}
			else
				cout<<"unable to delete"<<endl;
			break;
		case 3:
			cout<<"enter the position \n";
			cin>>pos;
			while(i!=pos)
			{
				prev=after;
				after= after->next;
				i++;
			}
			if(i==pos)
			{
				cout<<"the deleated elmnt is :  "<<after->data;
				prev->next= after->next;
			}
			else
				cout<<"not able to delete"<<endl;
			break;
	}
}

void link::search()
{
    NODE *temp;
    temp= new NODE;
    temp=first;
    int svalue,i=1;
    bool flag=false;
    cout<<"ntr valu to srch\n";
    cin>>svalue;
    while(temp!=NULL)
    {
        i++;
        if(svalue==temp->data)
          {
          	flag=true;
          	cout<< "elemnt found at "<<i-1;	
          }
        temp= temp->next;
    }
    if(!flag)
    {
    	cout<< "not found";
    }
}


int main()
{
    link l;
    int ch;
    while(1)
    {
        cout<<"\n**** MENU ****";
        cout<<"\n1:CREATE\n2:INSERT\n3:DELETE\n4:SEARCH\n5:DISPLAY\n6:EXIT\n";
        cout<<"\nEnter Your Choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            l.create();
            break;
        case 2:
            l.insert();
            break;
        case 3:
            l.deleate();
            break;
        case 4:
            l.search();
            break;
        case 5:
            l.display();
            break;
        case 6:
            return 0;
        }
    }
    return 0;
}
