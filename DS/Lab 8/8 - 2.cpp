#include <iostream>
using namespace std;

struct node
{
  int data;
  node* next;
};

int main()
{
  cout << "Stack(0) or Queue(1)?\n";
  int choice;
  cin >> choice;
  if(choice)
  {
    node *front = NULL;
    node *rear = NULL;
    cout << "Enter data.\n";
    while(true)
    {
      node *temp = new node;
      cin >> temp->data;
      temp->next = NULL;
      if(temp->data < 0)
      {
        delete temp;
        break;
      }

      if(rear)
      {
        rear->next = temp;
        rear = rear->next;
      }

      else front = rear = temp;
    }

    cout << "Dequeueing.\n";
    while(front)
    {
      cout << front->data << " " ;
      node *temp = front;
      front = front->next;
      delete temp;
    }
  }
  else
  {
    node *top = NULL;
    cout << "Enter data.\n";
    while(true)
    {
      node *temp = new node;
      cin >> temp->data;
      temp->next = NULL;

      if(temp->data < 0)
      {
        delete temp;
        break;
      }

      if(top)
      {
        temp->next = top;
        top = temp;
      }
      else top = temp;
    }

    cout << "Popping.\n";

    while(top)
    {
      node *temp = top;
      cout << temp->data << " ";
      top = top->next;
      delete temp;
    }
  }
  return 0;
}