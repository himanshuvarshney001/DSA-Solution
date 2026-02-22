#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
typedef struct node NODE;
NODE *newNode()
{
    NODE *ptr;
    ptr = (NODE *)malloc(sizeof(NODE));
    ptr->prev = NULL;
    ptr->next = NULL;
    return ptr;
}
NODE *insertionNode(NODE *head)
{
    NODE *nNode = newNode();
    NODE *temp = head;
    cout << "Enter data item=";
    cin >> nNode->data;
    cout << endl;
    if (temp == NULL)
    {
        return nNode;
    }
    else
    {
        head->prev = nNode;
        nNode->next = head;
        head = nNode;
        return head;
    }
}
NODE *insertionNode1(NODE *head)
{
    NODE *ptr = newNode();
    cout << "Enter element=";
    cin >> ptr->data;
    cout << endl;
    if (head == NULL)
        return ptr;
    else
    {
        NODE *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        ptr->prev = temp;
        temp->next = ptr;
        return head;
    }
}
NODE *insertionNode2(NODE *head)
{
    int size = 0, position;
    NODE *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        size++;
    }
    cout << "Enter position where you want to insert=";
    cin >> position;
    if (position > size+1 || position < 1)
    {
        cout << "You enter wrong position" << endl;
        return head;
    }
    if (position == 1)
    {
        return insertionNode(head);
    }
    else if (position == size+1)
    {
        return insertionNode1(head);
    }
    else
    {
        NODE *bef = head->next;
        NODE *aft = head;
        for (int i = 1; i < position-1; i++)
        {
            aft = bef;
            bef = bef->next;
        }
        NODE *ne = newNode();
        cout << "Enter Element=";
        cin >> ne->data;
        cout << endl;
        aft->next = ne;
        ne->prev = aft;
        bef->prev = ne;
        ne->next = bef;
        return head;
    }
}
NODE *delectionNode(NODE *head)
{
    if (head == NULL)
    {
        cout << "Linked list is empty:-" << endl;
        return NULL;
    }
    else if (head->next == NULL)
    {
        cout << "Deleted element :-" << head->data << endl;
        free(head);
        return NULL;
    }
    else
    {
        NODE *temp = head;
        head = head->next;
        head->prev = NULL;
        cout << "Deleted node is :-" << temp->data << endl;
        free(temp);
    }
    return head;
}
NODE *delictionNode2(NODE *head)
{
    if (head == NULL)
    {
        cout << "Linked List is empty:-" << endl;
        return NULL;
    }
    else if (head->next == NULL)
    {
        free(head);
        return NULL;
    }
    else
    {
        NODE *bef = head->next;
        NODE *aft = head;
        while (bef->next != NULL)
        {
            aft = bef;
            bef = bef->next;
        }
        aft->next = NULL;
        cout << "Deleted Element is=" << bef->data << endl;
        free(bef);
    }
    return head;
}
NODE *delectionNode3(NODE *head)
{
    int size = 0, position;
    NODE *temp = head;
    if (temp == NULL)
    {
        cout << "Linked List is empty:-" << endl;
        return NULL;
    }
    while (temp != NULL)
    {
        temp = temp->next;
        size++;
    }
    temp = head;
    cout << "Which node you want to delete indexing 1 base:-";
    cin >> position;
    position--;
    if (position >= size || position < 0)
    {
        cout << "You enter wrong position" << endl;
        return head;
    }
    else if (position == 0)
    {
        return delectionNode(head);
    }
    else if (position == size - 1)
    {
        return delictionNode2(head);
    }
    else
    {
        for (int i = 0; i < position; i++)
        {
            temp = temp->next;
        }
        cout << "deleted item=" << temp->data << endl;
        NODE *aft = temp->prev;
        NODE *bef = temp->next;
        aft->next = bef;
        bef->prev = aft;
        free(temp);
    }
    return head;
}
void fdisplay(NODE *head)
{
    if (head == NULL)
    {
        cout << "Linked list empty=" << endl;
        return;
    }
    else
    {
        NODE *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl
             << endl;
    }
}
void bdisplay(NODE *head)
{
    if (head == NULL)
    {
        cout << "Linked List is empty:-" << endl;
        return;
    }
    else
    {
        NODE *temp = head;
        NODE *rev = NULL;
        while (temp != NULL)
        {
            rev = temp;
            temp = temp->next;
        }
        while (rev != NULL)
        {
            cout << rev->data << " ";
            rev = rev->prev;
        }
        cout << endl
             << endl;
    }
}
int main()
{
    NODE *head;
    head = NULL;
    int choice;
    while (1)
    {

        cout << "1. For Insertion at begining in DLL:-" << endl;
        cout << "2. for Insertion at the end of DLL:-" << endl;
        cout << "3. for Insertion at specific positon:-" << endl;
        cout << "4. for Delection at begining in DLL:-" << endl;
        cout << "5.for Delection at end in DLL:-" << endl;
        cout << "6.for Delection happen at the specific position:-" << endl;
        cout << "7. For Forward Display:-" << endl;
        cout << "8. For Backward Display:-" << endl;
        cout << "9. For exit" << endl;
        cin >> choice;
        if (choice == 1)
        {
            head = insertionNode(head);
        }
        else if (choice == 2)
        {
            head = insertionNode1(head);
        }
        else if (choice == 3)
        {
            head = insertionNode2(head);
        }
        else if (choice == 4)
        {
            head = delectionNode(head);
        }
        else if (choice == 5)
        {
            head = delictionNode2(head);
        }
        else if (choice == 6)
        {
            head = delectionNode3(head);
        }
        else if (choice == 7)
        {
            fdisplay(head);
        }
        else if (choice == 8)
        {
            bdisplay(head);
        }
        else
        {
            break;
        }
    }
    return 0;
}
