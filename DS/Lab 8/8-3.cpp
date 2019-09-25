#include <iostream>
using namespace std;

struct node
{
  int data;
  node* next;
  node* prev;
};

node* head = NULL;

void reverse();
void traverse();
void ins_bef(int,int);
void ins_aft(int,int);
void del(int);

int main()
{
  node* iterator = NULL;
  cout << "Enter elements. Enter -1 to quit.\n";
  while(true)
  {
    node *temp = new node;
    cin >> temp->data;
    temp->next = NULL;
    temp->prev = NULL;
    if(temp->data < 0) break;

    if(iterator)
    {
      iterator->next = temp;
      temp->prev = iterator;
      iterator = temp;
    }
    else
    {
      iterator = head = temp;
    }
  }

  //END OF INPUT - MENU BEGINS

  cout << "MENU:\n";
  cout << "1. Insert before.\n2. Insert After.\n3. Delete.\n4. Traverse\n5. Reverse\n6. Exit.\n";

  while(true)
  {
  int choice;
  cin >> choice;

  switch(choice)
  {
    case 1:
    {
      cout << "Enter data.\n";
      int x;
      cin >> x;

      cout << "Before which element?\n";
      int pos;
      cin >> pos;

      ins_bef(x, pos);
      break;
    }

    case 2:
    {
      cout << "Enter data.\n";
      int x;
      cin >> x;

      cout << "After which element?\n";
      int pos;
      cin >> pos;

      ins_aft(x, pos);
      break;
    }

    case 3:
    {
      cout << "Enter data.\n";
      int x;
      cin >> x;

      del(x);
      break;
    }

    case 4:
      traverse();
      break;

    case 5:
      reverse();
      break;

    case 6:
      return 0;

    default:
    {
      cout << "Incorrect choice. Exiting.\n";
      return -1;
    }
  }

  cout << "Enter next choice.\n";
  }

  return 0;
}

void ins_bef(int x, int pos)
{
  if(head->data == pos)
  {
    node *temp = new node;
    temp->data = x;
    temp->next = head;
    temp->prev = NULL;
    head->prev = temp;
    head = temp;
    return;
  }

  for(node* i = head; i->next; i = i->next)
    if(i->data == pos)
    {
      node *temp = new node;
      temp->data = x;
      temp->next = i;
      temp->prev = i->prev;
      i->prev->next = temp;
      i->prev = temp;
      return;
    }
  cout << "Element not found.\n";
}

void ins_aft(int x, int pos)
{
  node *i = head;
  for(; i->next; i = i->next)
    if(i->data == pos)
    {
      node *temp = new node;
      temp->data = x;
      temp->next = i->next;
      temp->prev = i;
      i->next->prev = temp;
      i->next = temp;
      return;
    }

  if(i->data == pos)
  {
    node *temp = new node;
    temp->data = x;
    temp->prev = i;
    temp->next = NULL;
    i->next = temp;
    return;
  }

  cout << "Element not found.\n";
}

void del(int x)
{
  node *i = head;

  if(!head)
  {
    cout << "Empty.\n";
    return;
  }

  if(head->data == x)
  {
    node *temp = head;
    head = head->next;
    delete temp;
    return;
  }

  for(; i->next; i = i->next)
    if(i->data == x)
    {
      i->prev->next = i->next;
      i->next->prev = i->prev;
      delete i;
      return;
    }

  if(i->data == x)
  {
    i->prev->next = NULL;
    delete i;
    return;
  }

  cout << "Element not found.\n";
}

void traverse()
{
  node *i = head;

  if(!head)
  {
    cout << "Empty.\n";
    return;
  }

  for(; i->next; i = i->next)
    cout << i->data << "->";
  cout << i->data << endl;
}

void reverse()
{
  node *temp = NULL;
  node *curr = head;

  while(curr->next)
  {
    temp = curr->next;
    curr->next = curr->prev;
    curr->prev = temp;
    curr = curr->prev;
  }

  if(curr)
  {
    head = curr;
    temp = curr->next;
    curr->next = curr->prev;
    curr->prev = temp;
  }
}
