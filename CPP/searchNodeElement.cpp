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
        node *temp = new node;
        temp->data = no;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = tail->next;
        }
    }

    void display()
    {
        node *temp;
        temp = head;
        cout << "Elements are:" << endl;
        while (temp != NULL)
        {
            cout << temp->data;
            temp = temp->next;
        }
    }
};

int main()
{
    ll a;
    int num;
    cout << "enter Number:";
    cin >> num;
    a.addNode(num);
    a.display();
    return 0;
}