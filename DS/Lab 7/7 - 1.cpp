#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *p = NULL;
void append();
void prepend();
void truncate();
void traverse();
void reverse();
void sort();
void alternate();
void insert_sort();
int main()
{
    cout << "Create a linked list. Enter -1 to quit.\n";
    bool insert_sort_once = false;
    while(true)
    {
        int x;
        cin >> x;
        if(x < 0) break;
        node *temp = new node;
        temp->data = x;
        temp->next = NULL;
        if(p)
        {
          node *i = p;
          while(i->next)
            i = i->next;
          i->next = temp;
        }
        else p = temp;
    }
    cout << "MENU:\n";
    cout << "1. Insert before.\n2. Insert after.\n3. Delete node.\n4. Traverse.\n5. Reverse\n";
    cout << "6. Sort.\n7. Delete Alternate.\n8. Insert sorted.\n";
    while(true)
    {
        int choice;
        int x;
        cin >> choice;
        switch(choice)
        {
            case 1:
                prepend();
                break;
            case 2:
                append();
                break;
            case 3:
                truncate();
                break;
            case 4:
                traverse();
                break;
            case 5:
                reverse();
                break;
            case 6:
                sort();
                break;
            case 7:
                alternate();
                break;
            case 8:
                if(!insert_sort_once)
                {
                    insert_sort_once = true;
                    sort();
                }
                insert_sort();
                break;
            default:
                cout << "Incorrect choice. Exiting.";
                return -1;
        }
        cout << "Enter next choice.\n";
    }
    return 0;
}

void append()
{
    cout << "Enter data.";
    node* app = new node;
    cin >> app->data;
    app->next = NULL;
    cout << "After which element do you want to insert?";
    int loc;
    cin >> loc;
    if(p)
    {
        node *temp = p;
        while(temp->next)
        {
          if(temp->data == loc)
          {
            app->next = temp->next;
            temp->next = app;
            return;
          }
          temp = temp->next;
        }
        cout << "Node not found.\n";
    }
    else
    {
      cout << "Inserting as first node.\n";
      p = app;
    }
}

void prepend()
{
  cout << "Enter data.";
  node* app = new node;
  cin >> app->data;
  app->next = NULL;
  cout << "Before which element do you want to insert?";
  int loc;
  cin >> loc;
  if(p)
  {
    node *temp = p;
    node *back = temp;
    while(temp->next)
    {
      if(temp->data == loc)
      {
        back->next = app;
        app->next = temp;
        return;
      }
      back = temp;
      temp = temp->next;
    }
    cout << "Element not found.\n";
  }
  else
  {
  cout << "Inserting as first node.\n";
  p = app;
  }
}

void traverse()
{
    if(!p)
    {
        cout << "Empty.\n";
        return;
    }
    node* i = p;
    while(i->next)
    {
        cout << i->data << "->";
        i = i->next;
    }
    cout << i->data << endl;
}

void truncate()
{
    if(!p)
    {
        cout << "Empty.\n";
        return;
    }
    cout << "Which node do you want to delete?\n";
    int x;
    cin >> x;
    node *i = p;
    node *back = i;
    while(i->next)
    {
      if(i->data == x)
      {
        back->next = i->next;
        delete i;
        return;
      }
      back = i;
      i = i->next;
    }
    cout << "Element not found.\n";
}

void reverse()
{
    node* last = p;
    int n = 1;
    if(!p)
    {
        cout << "Empty.\n";
        return;
    }
    while(last->next)
    {
        last = last->next;
        n++;
    }
    int steps = 0;
    while(steps < n / 2)
    {
        int i = 0, k = 0;
        node *a = p, *b = p;
        while(i < steps)
        {
            a = a->next;
            i++;
        }
        while(k < n - i - 1)
        {
            b = b->next;
            k++;
        }
        swap(a->data, b->data);
        steps++;
    }
}

void sort()
{
    if(!p)
    {
        cout << "Empty.\n";
        return;
    }
    for(node*i = p; i->next; i = i->next)
        for(node*j = i->next; j; j=j->next)
            if(i->data > j->data)
            swap(i->data, j->data);
}

void alternate()
{
    if(!p)
    {
        cout << "Empty.\n";
        return;
    }
    node *i = p;
    while(i && i->next)
    {
        node* temp = i->next;
        i->next = temp->next;
        i = i->next;
        delete temp;
    }
}

void insert_sort()
{
    node *temp = new node;
    cout << "Enter data.\n";
    cin >> temp->data;
    temp->next = NULL;
    node *i = p;
    while(i->next->data < temp->data && i->next != NULL)
        i = i->next;
    temp->next = i->next;
    i->next = temp;
}
