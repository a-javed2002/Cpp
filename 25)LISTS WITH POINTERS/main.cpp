#include <iostream>
using namespace std;

struct node
{
    int val;
    node *next;
};

void output_list(node *head)
{
    node *current = head;
    cout << "[ ";
    while (current != NULL)
    {
        cout << current->val << " "; // cout << (*current).val << " ";
        current = current->next;     // current = (*current).next;
    }
    cout << "]" << endl;
}

node *create_node(node *current, int val)
{
    node *n;
    n = new node;
    n->val = val;
    n->next = NULL;
    current->next = n;
    return n;
}

void delete_after_node(node *current)
{
    node *temp = current->next;
    current->next = current->next->next;
    delete temp;
}

int main()
{
    node *head;
    head = new node;
    head->val = 0;
    head->next = NULL;

    node *current;
    current = head;
    // Forming List Of Square Root 0-10
    for (int i = 1; i <= 10; i++)
    {
        current = create_node(current, i * i);
    }

    // Displaying The Lists
    output_list(head);

    // Deleting A node
    current = head->next;
    cout << "Going To Delete: " << current->val << endl;
    delete_after_node(head);
    output_list(head);

    return 0;
}