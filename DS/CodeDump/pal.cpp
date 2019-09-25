#include<iostream>
#include<string.h>
using namespace std;
enum Boolean{True,False};
class stack1
{


  public:
      char a[20], top, maxi;
      stack1(int m);
      Boolean isEmpty();
      Boolean isFull();
      void push(char item);
      char pop();
      void display();
};

stack1::stack1(int m)
{
    maxi=m;
    top=-1;
}

Boolean stack1::isEmpty()
{
    if(top==-1)
        return True;
    else
        return False;
}

Boolean stack1::isFull()
{
    if(top==maxi)
        return True;
    else
        return False;
}

void stack1::push(char item)
{

    if(top==maxi)
        cout<<"Overflow";
    else
        a[++top]=item;
}

char stack1:: pop()
{
    if(top==-1)
        {cout<<"Underflow";
        return 0;
        }
    else
        return a[top--];

}

void stack1::display()
{
    if(top!=-1)
    {
        for(int i=0;i<=top;i++)
            cout<<"\n"<<a[i];
    }
}

void isPalindrome(char str[])
{

    stack1 s(20);int i;
    for(i=0;i<strlen(str);i++)
        s.push(str[i]);
    i=0;
    while(s.top!=-1 && str[i]==s.pop())
        i++;

    if(s.top==-1)
        cout<<"\n It is a palindrome";
    else
        cout<<"\n It is not a palindrome";
}

int main()
{
  char arr[20];
  cout<<"\n Enter the string for palindrome check: ";
  cin.get(arr,20);
  isPalindrome(arr);
  return 0;
}
