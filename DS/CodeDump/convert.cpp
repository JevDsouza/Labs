#include<iostream>
using namespace std;

enum Boolean {True,False};

class stack1
{
      public:
      int a[20], top, maxi;
      stack1(int m);
      Boolean isEmpty();
      Boolean isFull();
      void push(int item);
      int pop();
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

void stack1::push(int item)
{

    if(top==maxi)
        cout<<"Overflow";
    else
        a[++top]=item;
}

int stack1:: pop()
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

void convert(int a,int b)
{

    stack1 s(50);
    int r,k;
    while(a!=0)
    {
        r=a%b;
        s.push(r);
        a=a/b;
    }

    while(s.top!=-1)
    {
        k=s.pop();
        cout<<k;
    }
    return;
}

int main()
{
    int n,d;
    cout<<"\n Enter number to convert: ";
    cin>>n;
    cout<<"\n Enter base to convert to: ";
    cin>>d;
    convert(n,d);
    return 0;
}
