
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
	NODE *temp=head;
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
NODE* delete_duplicate(NODE *head)
{
	NODE *temp = head;
	if(head==NULL || head->next==NULL)
		return head;
	while(temp!=NULL)
	{
		if(temp->next!=NULL && temp->data==temp->next->data)
		{
			NODE* ptr=temp->next;
			temp->next=temp->next->next;
			delete ptr;
		}
		else
			temp=temp->next;
	}
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
int main()
{

	NODE *head = NULL;
	while(1)
	{
		int choice=0;
		cout << "1.Insert at the first="<<endl;
		cout<<"2.Display="<<endl;
		cout << "3.Delete duplicate elements=" << endl;
		cin >> choice;
		if(choice==1)
		{
			head = insertEnd(head);
		}
		else if(choice==2)
		{
			display(head);
		}
		else if(choice==3)
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