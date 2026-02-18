#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int num)
    {
        val = num;
        next = NULL;
    }
    ListNode(int num, ListNode *next)
    {
        val = num;
        next = next;
    }
};
ListNode *InsertEnd(ListNode *head, int item)
{
    ListNode *temp = head;
    ListNode *node = new ListNode(item);
    if (temp == NULL)
    {
        return node;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = node;
    }
    return head;
}
ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode *left = list1;
    ListNode *right = list2;
    ListNode *result = NULL;
    while (left != NULL || right != NULL)
    {
        // when one likedlist is execuated
        if (left == NULL)
        {
            result = InsertEnd(result, right->val);
            right = right->next;
            continue;
        }
        else if (right == NULL)
        {
            result = InsertEnd(result, left->val);
            left = left->next;
            continue;
        }
        // when condition checked
        if (left->val == right->val)
        {
            result = InsertEnd(result, left->val);
            result = InsertEnd(result, right->val);
            left = left->next;
            right = right->next;
        }
        else if (left->val > right->val)
        {
            result = InsertEnd(result, right->val);
            right = right->next;
        }
        else
        {
            result = InsertEnd(result, left->val);
            left = left->next;
        }
    }
    return result;
}

int main()
{
    ListNode *head = NULL;
    int item;
    cout << "Enter item=";
    cin >> item;
    head = InsertEnd(head, item);
    item;
    cout << "Enter item=";
    cin >> item;
    head = InsertEnd(head, item);
    item;
    cout << "Enter item=";
    cin >> item;
    head = InsertEnd(head, item);
    item;
    cout << "Enter item=";
    cin >> item;
    head = InsertEnd(head, item);
    ListNode *head1 = NULL;
    item;
    cout << "Enter item=";
    cin >> item;
    head1 = InsertEnd(head1, item);
    item;
    cout << "Enter item=";
    cin >> item;
    head1 = InsertEnd(head1, item);
    item;
    cout << "Enter item=";
    cin >> item;
    head1 = InsertEnd(head1, item);
    ListNode *result = NULL;
    result = mergeTwoLists(head, head1);
    ListNode *temp = result;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}
