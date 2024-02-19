#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node *next;

    node(int val)
    {
        this->val = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
};

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

bool search(node *head, int searchVal)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->val == searchVal)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void delete_first(node *&head)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }

    node *toDelete = head;
    head = head->next;
    delete toDelete;
}

void delete_by_val(node *&head, int val)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }

    if (head->next == NULL)
    {
        cout << "Only 1 was there...but now list is empty" << endl;
        delete_first(head);
        return;
    }

    node *temp = head;
    while (temp->next->val != val)
    {
        temp = temp->next;
    }

    node *toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1); // 1,n,n->next=NULL
    insertAtTail(head, 2); // 2,loop break,n->next=address,n->next->next=NULL
    insertAtTail(head, 3);
    display(head);
    insertAtHead(head, 4);
    display(head);
    cout << search(head, 3) << endl;
    return 0;
}