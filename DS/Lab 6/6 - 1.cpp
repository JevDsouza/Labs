#include <iostream>
#include <string.h>
using namespace std;

class stack
{
  char a[50];
  int top;

public:

  stack()
  {
    top = 0;
    a[0] = '(';
  }

  void push(char x)
  {
    a[++top] = x;
  }

  char pop()
  {
    return a[top--];
  }

  bool isempty()
  {
    return top < 1;
  }
};

int main()
{
  cout << "Enter infix expression.\n";
  char a[100];
  cin.getline(a, 100);

  //reversing the expression keeping brackets in place
  int n = strlen(a);
  for(int i = 0; i < n / 2; i++)
  {
    char temp = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = temp;
  }

  for(int i = 0; i < n; i++)
  {
    if(a[i] == '(') a[i] = ')';
    else if(a[i] == ')') a[i] = '(';
    else continue;
  }

  char output[100];
  int out = 0;
  stack s;

  for(int i = 0; i < n; i++)
  {
    if(a[i] == '(')
      s.push(a[i]);
    else if (a[i] >= 'a' && a[i] <= 'z')
      output[out++] = a[i];

    //pop until ( is found and discard
    else if (a[i] == ')')
    {
      char temp = s.pop();
      while(temp != '(')
      {
        output[out++] = temp;
        temp = s.pop();
      }
    }

    //pop until ( is found
    else if(a[i] == '+' || a[i] == '-')
    {
      char temp = s.pop();
      while(temp != '(')
      {
        output[out++] = temp;
        temp = s.pop();
      }
      s.push(temp);
      s.push(a[i]);
    }

    //pop only if * or /
    else if(a[i] == '*' || a[i] == '/')
    {
      char temp = s.pop();
      if(temp == '*' || temp == '/')
        output[out++] = temp;
      else s.push(temp);
      s.push(a[i]);
    }

    else continue;
  }
  while(!s.isempty())
  output[out++] = s.pop();

  for(int i = out - 1; i >= 0; i--)
  cout << output[i];
  return 0;
}
