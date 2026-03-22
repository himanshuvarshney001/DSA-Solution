// Delection can be done in linked list in three ways
//  1) Delection at the begining
//  2) Delection at the End
//  3) Delection at specified positon
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
            if (temp == NULL)
            {
                cout << "position out of bound" << endl;
                return he;
            }
            temp = temp->next;
        }
        NODE *item = (NODE *)malloc(sizeof(NODE));
        cout << "Enter Element=";
        cin >> item->data;
        item->next = temp->next;
        temp->next = item;
        return he;
    }
}
node *deleteFirst(node *he)
{
    if (he == NULL)
    {
        cout << "Linkedlist is empty" << endl;
        return he;
    }
    else
    {
        cout << "Deleted Element=" << he->data << endl;
        node *p = he;
        he = he->next;
        free(p);
        return he;
    }
}
node *deleteEnd(node *he)
{
    node *temp = he;
    if (temp == NULL)
    {
        cout << "Linkedlist is empty!";
        return he;
    }
    else if (temp->next == NULL)
    {
        free(he);
        he = NULL;
        return he;
    }
    else
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        cout << "Deleted element is=" << temp->next->data << endl;
        free(temp->next);
        temp->next = NULL;
        return he;
    }
}
node *speposition(node *head)
{
    int position;
    if (head == NULL)
    {
        cout << "LinkedList is empty!" << endl;
        return head;
    }
    cout << "Enter Position of element that is want to delete=";
    cin >> position;
    if (position <= 0)
    {
        cout << "Invalid Position!" << endl;
        return head;
    }
    if (position == 1)
    {
        head = deleteFirst(head);
        return head;
    }
    int k = 1, i;
    node *ptr, *temp = head;
    for (i = 1; temp != NULL && i < position; i++)
    {
        ptr = temp;
        temp = temp->next;
    }
    if (temp != NULL)
    {
        ptr->next = temp->next;
        cout << "Deleted element is " << temp->data << endl;
        free(temp);
    }
    else
    {
        cout << "This position not exist (Please enter correct position)" << endl;
    }

    return head;
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
        cout << "4. Delete at the begining=" << endl;
        cout << "5. Delete at the End=" << endl;
        cout << "6.Delete at the specified position=" << endl;
        cout << "7. For Display=" << endl;
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
            head = deleteFirst(head);
        }
        else if (choice == 5)
        {
            head = deleteEnd(head);
        }
        else if (choice == 6)
        {
            head = speposition(head);
        }
        else if (choice == 7)
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