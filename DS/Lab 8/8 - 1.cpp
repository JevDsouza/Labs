#include <iostream>
using namespace std;

struct node
{
    int data;
    node* prev;
    node* next;
};

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

void traverse(node *a)
{
    node *temp = a;
    for (; temp->next; temp = temp->next)
        cout << temp->data << "->";
    cout << temp->data << endl;
}

int main()
{
    node *head_a = NULL;
    node *head_b = NULL;
    cout << "Enter data for first list. (-1 to quit.)\n";
    enter_data(&head_a);

    cout << "Enter data for second list. (-1 to quit.)\n";
    enter_data(&head_b);

    cout << "Concatenating.\n";

    node* i = head_a;
    for(;i->next;i=i->next);
    i->next = head_b;
    head_b->prev = i;
    traverse(a);
    return 0;
}
