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
NODE *reverse(NODE *head)
{
    // stack<int> st;
    if (head == NULL)
    {
        return NULL;
    }
    // else
    // {
    //     NODE *temp = head;
    //     while(temp!=NULL)
    //     {
    //         st.push(temp->data);
    //         temp = temp->next;
    //     }
    //     temp=head;
    //     while(temp!=NULL)
    //     {
    //         temp->data = st.top();
    //         st.pop();
    //         temp = temp->next;
    //     }
    //     return head;
    // }

    // second approach
    NODE *curr = head;
    NODE *temp = NULL;
    while (curr != NULL)
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    return temp->prev;
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
        cout << endl;
    }
}

int main()
{
    NODE *head;
    head = NULL;
    int choice;
    while (1)
    {

        cout << "1. For Insertion at end in DLL:-" << endl;
        cout << "2. for reverse the linked list=" << endl;
        cout << "7. For Forward Display:-" << endl;
        cout << "9. For exit" << endl;
        cin >> choice;
        if (choice == 1)
        {
            head = insertionNode1(head);
        }
        else if (choice == 2)
        {
            head = reverse(head);
        }
        else if (choice == 7)
        {
            fdisplay(head);
        }
        else
        {
            break;
        }
    }
    return 0;
}
