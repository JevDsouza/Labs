#include <iostream>
#include <string.h>
using namespace std;
struct node
{
  int data;
  node *next;
  node *prev;
};

node* number(char[]);
void reverse(node**);
void traverse(node*);
node* add(node**,node**);

int main()
{
  cout << "Enter first number.\n";
  char a[100];
  cin.getline(a, 100);
  node *head_a = number(a);

  cout << "Enter second number.\n";
  char b[100];
  cin.getline(b,100);
  node *head_b = number(b);

  reverse(&head_a);
  reverse(&head_b);
  node *sum = add(&head_a, &head_b);
  reverse(&sum);
  traverse(sum);
  return 0;
}

node *number(char a[])
{
  node *head = NULL;
  node *curr = head;
  for(int i = 0; i < strlen(a); i++)
  {
    node *temp = new node;
    temp->data = a[i] - '0';
    temp->prev = temp->next = NULL;

    if(head)
    {
      curr->next = temp;
      temp->prev = curr;
      curr = curr->next;
    }
    else head = curr = temp;
  }
  return head;
}

void traverse(node *head)
{
  for(node *i = head; i; i = i->next)
    cout << i->data;
  cout << endl;
}

void reverse(node **head)
{
  node *temp = NULL;
  node *curr = *head;

  while(curr->next)
  {
    temp = curr->next;
    curr->next = curr->prev;
    curr->prev = temp;
    curr = curr->prev;
  }

  if(curr)
  {
    *head = curr;
    temp = curr->next;
    curr->next = curr->prev;
    curr->prev = temp;
  }
}

node *add(node **a, node **b)
{
  node *ans = NULL;
  node *curr = ans;
  int carry = 0;

  node *i = *a;
  node *j = *b;
  while(i && j)
  {
    node *temp = new node;
    temp->prev = temp->next = NULL;
    int sum = i->data + j->data + carry;
    temp->data = sum % 10;
    carry = sum / 10;
    if(ans)
    {
      temp->prev = curr;
      curr->next = temp;
      curr = curr->next;
    }
    else ans = curr = temp;

    i = i->next;
    j = j->next;
  }


  while(i)
  {
    node *temp = new node;
    temp->prev = temp->next = NULL;
    int sum = i->data + carry;
    temp->data = sum % 10;
    carry = sum / 10;
    temp->prev = curr;
    curr->next = temp;
    curr = curr->next;
    i = i->next;
  }

  while(j)
  {
    node *temp = new node;
    temp->prev = temp->next = NULL;
    int sum = j->data + carry;
    temp->data = sum % 10;
    carry = sum / 10;
    temp->prev = curr;
    curr->next = temp;
    curr = curr->next;
    j = j->next;
  }

  return ans;
}
