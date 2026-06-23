
//Insertion are done linkedlist in theree ways...
//1) Insertion at the begining
//2) Insertion at the End
//3) Insertion at the Specified position

#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
void display(NODE *head)
{
    NODE *temp;
    temp = head;
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
NODE *insertFirst(NODE *head)
{
    NODE *temp = (NODE *)malloc(sizeof(NODE));
    cout << "Enter item=";
    cin >> temp->data;
    temp->next = head;
    head = temp;
    return head;
}
NODE *insertEnd(NODE *head)
{
    NODE *node = (NODE *)malloc(sizeof(NODE));
    cout << "Enter the item=";
    cin >> node->data;
    NODE *temp = head;
    if (temp == NULL)
    {
        return node;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    node->next = NULL;
    temp->next = node;
    return head;
}
NODE *insert_specific(NODE *he)
{
    NODE *temp = he;
    int k;
    cout << "Enter Position=";
    cin >> k;
    if (k == 0)
    {
        NODE *ptr = insertFirst(he);
        return ptr;
    }
    if (temp == NULL)
    {
        cout << "Linked list empty!" << endl;
        return he;
    }
    else
    {
        for (int i = 1; i < k; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                cout << "Node in the list at less than one" << endl;
                return he;
            }
        }
        NODE *item = (NODE *)malloc(sizeof(NODE));
        cout << "Enter Element=";
        cin >> item->data;
        item->next = temp->next;
        temp->next = item;
        return he;
    }
}
int main()
{
    NODE *head = NULL;
    while (1)
    {
        int choice;
        cout << "1. For Insertion at First=" << endl;
        cout << "2. For Insertion at End=" << endl;
        cout << "3. For Insertion Between=" << endl;
        cout << "4. For Display=" << endl;
        cin >> choice;
        if (choice == 1)
        {
            head = insertFirst(head);
        }
        else if (choice == 2)
        {
            head = insertEnd(head);
        }
        else if (choice == 3)
        {
            head = insert_specific(head);
        }
        else if (choice == 4)
        {
            display(head);
        }
        else
        {
            exit(1);
        }
    }
    return 0;
}