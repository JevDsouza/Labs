#include <iostream>
#include <string.h>
using namespace std;

class exp
{
public:
  char a[50];
  exp()
  {
    a[0] = '\0';
  }

  exp(char x)
  {
    a[0] = x;
    a[1] = '\0';
  }

  exp(char x[])
  {
    strcpy(a, x);
  }

  exp operator+(const exp &b)
  {
    int n = strlen(a);
    int m = strlen(b.a);
    exp result;
    for(int i = 0; i < n; i++)
      result.a[i] = a[i];
    for(int i = 0; i < m; i++)
      result.a[n + i] = b.a[i];
    result.a[n + m] = '\0';
    return result;
  }
};

class stack
{
  exp a[50];
  int top;

public:
  stack()
  {
    top = -1;
  }

  void push(exp x)
  {
    a[++top] = x;
  }

  exp pop()
  {
    return top < 0 ? exp('?') : a[top--];
  }

  void display()
  {
    for(int i = 0; i <= top; i++)
      cout << a[i].a << ",";
  }
};

int main()
{
  cout << "Enter prefix.\n";
  char a[100];
  cin.getline(a, 100);
  stack s;

  for(int i = strlen(a) - 1; i >= 0; i--)
  {
    if(a[i] >= 'a' && a[i] <= 'z')
    s.push(exp(a[i]));

    else if(a[i] == '+' || a[i] == '-' || a[i] == '/' || a[i] == '*')
    {
      exp x = s.pop();
      exp y = s.pop();
      s.push(x + y + exp(a[i]));
    }

    else continue;

  }

  cout << s.pop().a;
  return 0;
}
