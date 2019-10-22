#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
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
    void display()
    {
        node *tmp;
        tmp = head;
        cout << "Elements in Node are:" << endl;
        while (tmp != NULL)
        {
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
    }

    void concatenate(node *a, node *b)
    {
        if (a != NULL && b != NULL)
        {
            if (a->next == NULL)
            {
                a->next = b;
            }
        }
        else
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
        a->next = p;
    }
};

int main()
{
    ll a;
    a.addNode(1);
    a.addNode(2);
    a.front(0);
    a.display();
    return 0;
}