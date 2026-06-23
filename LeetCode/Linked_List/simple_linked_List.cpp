#include <bits/stdc++.h>
using namespace std;
struct NODE
{
    int data;
    struct NODE *next;
};
typedef struct NODE node;
node *insert(node *head)
{
    node *ptr = (node *)malloc(sizeof(node));
    cout << "Enter element=";
    cin >> ptr->data;
    ptr->next = NULL;
    if (head == NULL)
    {
        return ptr;
    }
    else
    {
        node *temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp -> next = ptr;
    }
    return head;
}
void display(node *head)
{
    node *temp = head;
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}
int main()
{
    node *head = NULL;
    head = insert(head);
    head = insert(head);
    head = insert(head);
    head = insert(head);
    head = insert(head);
    head = insert(head);
    display(head);
    return 0;
}
