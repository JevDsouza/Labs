#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
	node *prev;
};

node *head = NULL;

void traverse();
void remove(int);

int main()
{
	cout << "Enter 1 - data to insert and 2 - data to delete.\n";
	while(true)
	{
		int choice;
		cin >> choice;
		switch(choice)
		{
			case 1:
			{
				node *temp = new node;
				cin >> temp->data;

				if(head)
				{
					node *i = head;
					for(;i->next != head; i = i->next);

					i->next = temp;
					head->prev = temp;
					temp->prev = i;
					temp->next = head;
				}

				else
				{
					head = temp;
					temp->next = head;
					temp->prev = head;
				}

				traverse();
				break;
			}

			case 2:
			{
				int x;
				cin >> x;
				remove(x);
				traverse();
				break;
			}

			default:
			{
				cout << "Exiting.\n";
				return 0;
			}
		}

		cout << "Enter next choice.\n";
	}
	return 0;
}

void traverse()
{
	if(!head)
	{
		cout << "List is empty.\n";
		return;
	}

	node *i = head;
	for(; i->next != head; i = i->next)
		cout << i->data << "->" ;
	cout << i->data << endl;
}

void remove(int x)
{
	if(!head)
	{
		cout << "List is empty.\n";
		return;
	}

	if(head->data == x && head->next == head)
	{
		delete head;
		head = NULL;
		return;
	}

	if(head->data == x)
	{
		head->next->prev = head->prev;
		head->prev->next = head->next;
		node *new_head = head->next;
		delete head;
		head = new_head;
		return;
	}

	node *i = head;
	for(; i->next != head; i = i->next)
	{
		if(i->data == x)
		{
			i->next->prev = i->prev;
			i->prev->next = i->next;
			delete i;
			return;
		}
	}

	if(i->data == x)
	{
		i->next->prev = i->prev;
		i->prev->next = i->next;
		delete i;
		return;
	}

	cout << "Element not found.\n";
}