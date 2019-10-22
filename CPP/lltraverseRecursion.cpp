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

    node *gethead()
    {
        return head;
    }
    void display(node *head)
    {
        if (head = NULL)
        {
            cout << "NULL" << endl;
        }
        else
        {
            cout << head->data << endl;
            display(head->next);
        }
    }
};

int main()
{
    ll a;
    a.addNode(2);
    a.addNode(3);
    a.display();
    return 0;
}