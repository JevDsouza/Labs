#include <iostream>
using namespace std;

struct node
{
  int data;
  node *next;
  node *prev;
};

void enter_data(node **head);
void traverse(node *head);
node *unique(node **a);
node *intersection(node **a, node **b, node **u);

int main()
{
  node *head_a = NULL;
  node *head_b = NULL;
  cout << "Enter data for first list. (-1 to quit.)\n";
  enter_data(&head_a);

  cout << "Enter data for second list. (-1 to quit.)\n";
  enter_data(&head_b);

  node *u = unique(&head_a);
  node *last = u;
  for(;last->next;last = last->next);
  node **last_pointer = &last->next;
  last->next = unique(&head_b);

  traverse(unique(&u));
  node *i = intersection(&head_a, &head_b, &u);
  traverse(unique(&i));
  return 0;
}

void enter_data(node **head)
{
  node *curr = *head;
  while(true)
  {
    node *temp = new node;
    cin >> temp->data;
    temp->prev = temp->next = NULL;

    if(temp->data < 0)
    {
      delete temp;
      return;
    }

    if(*head)
    {
      curr->next = temp;
      temp->prev = curr;
      curr = curr->next;
    }

    else *head = curr = temp;
  }
}

void traverse(node *head)
{
  if(!head)
  {
    cout << "Empty.\n";
    return;
  }

  for(node *i = head; i; i = i->next)
    cout << i->data << " " ;

  cout << endl;
}

node *unique(node **a)
{
  node *curr = *a;
  node *head = NULL;
  node *iterator = head;
  while(curr)
  {
    bool present = false;

    for(node *i = head; i; i = i->next)
    {
      if(i->data == curr->data)
      {
        present = true;
        break;
      }
    }

    if(!present)
    {
      node *temp = new node;
      temp->data = curr->data;
      temp->prev = temp->next = NULL;
      if(head)
      {
        temp->prev = iterator;
        iterator->next = temp;
        iterator = iterator->next;
      }
      else head = iterator = temp;
    }
    curr = curr->next;
  }
  return head;
}


node *intersection(node **a, node **b, node **u)
{
  node *head = NULL;
  node *curr = head;
  for(node *i = *u; i; i = i->next)
  {
    bool pres_a = false;
    bool pres_b = false;
    for(node *i_a = *a; i_a; i_a = i_a->next)
    {
      if(i->data == i_a->data)
      {
        pres_a = true;
        break;
      }
    }
    for(node *i_b = *b; i_b; i_b = i_b->next)
    {
      if(i->data == i_b->data)
      {
        pres_b = true;
        break;
      }
    }
    if(pres_a && pres_b)
    {
      node *temp = new node;
      temp->data = i->data;
      temp->prev = temp->next = NULL;

      if(head)
      {
        curr->next = temp;
        temp->prev = curr;
        curr = curr->next;
      }
      else head = curr = temp;
    }
  }
  return head;
}
