#include <iostream>
#include <string.h>
using namespace std;

class stack
{
  int a[50];
  int top;

public:
  stack()
  {
    top = -1;
  }

  void push(int x)
  {
    a[++top] = x;
  }

  int pop()
  {
    return top < 0 ? 999 : a[top--];
  }
};

int main()
{
  cout << "Enter prefix expression.\n";
  char a[100];
  cin.getline(a, 100);

  stack s;

  int digit = 0;
  bool active = false;

  for(int i = strlen(a) - 1; i >= 0; i--)
  {
    if(a[i] >= '0' && a[i] <= '9')
    {
      digit = digit * 10 + a[i] - '0';
      active = true;
    }

    if(a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/')
    {
      int x = s.pop();
      int y = s.pop();
      switch(a[i])
      {
        case '+' : s.push(x + y); break;
        case '-' : s.push(x - y); break;
        case '*' : s.push(x * y); break;
        case '/' : s.push(x / y);
      }
    }

    if(a[i] == ' ' && active)
    {
      s.push(digit);
      digit = 0;
      active = false;
    }
  }

  cout << s.pop();
  return 0;
}
