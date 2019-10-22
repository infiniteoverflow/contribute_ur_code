#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class ll
{
private:
    node *head, *tail;

public:
    ll()
    {
        head = NULL;
        tail = NULL;
    }

    void addNode(int no)
    {
        node *tmp = new node;
        tmp->data = no;
        tmp->next = NULL;

        if (head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }

    /*void display(){
        node *tmp;
        tmp = head;
        while(tmp!= NULL){
            cout<<tmp = tmp->data<<endl;
            tmp = tmp->next;
        }
    }
    */

    node *gethead()
    {
        return head;
    }

    static void display(node *head)
    {
        if (head == NULL)
        {
            cout << "NULL";
        }
        else
            ()
            {
                cout << head->data;
                display(head->next);
            }
    }

    void countNode()
    {
        int count = 0;
        node *tmp;
        tmp = head;
        while (tmp != NULL)
        {
            count++;
        }
        cout << "Total Elements:" << count << endl;
    }

    static void conc(node *a, node *b)
    {
        if (a != NULL && b != NULL)
        {
            if (a->next == NULL)
            {
                a->next = b;
            }
            else
            {
                conc(a->next, b);
            }
        }
        else
            ()
            {
                cout << "Either a or b is NULL";
            }
    }

    void front(int no)
    {
        node *tmp = new node;
        tmp->data = no;
        tmp->next = head;
        head = tmp;
    }

    void after(node *a, int value)
    {
        node *p = new node;
        p->data = value;
        p->next = a->next;
        a->next p;
    }

    void delete (node *beforeDel)
    {
        node *temp;
        temp = beforeDel->next;
        beforeDel->next = temp->next;
        delete temp;
    }
};

int main()
{
    ll a;
    a.addNode(1);
    a.addNode(2);
    a.addNode(3);
    a.front(0);
    a.addNode(4);
    a.addNode(5);
    a.after(a.gethead()->next, 10);
    a.del(a.gethead()->next);
    ll::display(a.gethead());

    return 0;
}