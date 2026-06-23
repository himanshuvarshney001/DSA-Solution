
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
void display(NODE *head)
{
    NODE *temp = head;
    if (temp == NULL)
    {
        cout << "Linked list is empty" << endl;
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
NODE *delete_duplicate(NODE *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    NODE *temp = head;
    while (temp != NULL)
    {
        NODE *temp1 = temp;
        while (temp1->next != NULL)
        {
            if (temp->data == temp1->next->data)
            {
                NODE *duplicate = temp1->next;
                temp1->next = temp1->next->next;
                if (duplicate->next != NULL)
                {
                    duplicate->next->prev = temp1;
                }
                delete duplicate;
            }
            else
            {
                temp1 = temp1->next;
            }
        }
        temp = temp->next;
    }
    cout << "Delete duplicate successfully" << endl;
    return head;
}
NODE *insertEnd(NODE *head)
{
    NODE *node = (NODE *)malloc(sizeof(NODE));
    cout << "Enter the item=";
    cin >> node->data;
    NODE *temp = head;
    node->next = NULL;
    node->prev = NULL;
    if (head == NULL)
    {
        return node;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    node->prev = temp;
    temp->next = node;
    return head;
}
int main()
{

    NODE *head = NULL;
    while (1)
    {
        int choice = 0;
        cout << "1.Insert at the first=" << endl;
        cout << "2.Display=" << endl;
        cout << "3.Delete duplicate elements=" << endl;
        cin >> choice;
        if (choice == 1)
        {
            head = insertEnd(head);
        }
        else if (choice == 2)
        {
            display(head);
        }
        else if (choice == 3)
        {
            head = delete_duplicate(head);
        }
        else
        {
            break;
        }
    }
    return 0;
}