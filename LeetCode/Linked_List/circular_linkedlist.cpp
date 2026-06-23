#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
typedef struct node Node;
Node *newNode()
{
    Node *ptr;
    ptr = (Node *)malloc(sizeof(Node));
    ptr->next = NULL;
    return ptr;
}
Node *insert_first(Node *head)
{
    Node *ptr = newNode();
    cout << "Enter data=";
    cin >> ptr->data;
    if (head == NULL)
    {
        ptr->next = ptr;
        return ptr;
    }
    else
    {
        Node *temp = head;
        ptr->next = head;
        head = ptr;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = head;
    }
    return head;
}
Node *insert_end(Node *head)
{
    Node *ptr = newNode();
    cout << "Enter data=";
    cin >> ptr->data;
    if (head == NULL)
    {
        ptr->next = ptr;
        return ptr;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->next = head;
    }
    return head;
}
void display(Node *head)
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << endl
             << "Linked list is empty" << endl;
        return;
    }
    else
    {
        do
        {
            cout << temp->data << endl;
            temp = temp->next;
        } while (temp->next != head);
    }
}
int main()
{
    Node *head = NULL;
    head = insert_first(head);
    head = insert_end(head);
    display(head);
    return 0;
}