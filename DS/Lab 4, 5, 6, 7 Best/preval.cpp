#include <iostream>
#include <string.h>
using namespace std;
enum Boolean{FALSE,TRUE};
class stack1
{
public:
    char a[20];int top;int max1;
    stack1(int m)
    {
        top=-1;
        max1=100;
    }
    Boolean Isempty();
    Boolean IsFull();
    void push(int x);
    int pop();
    void display();
    int peek();
};
Boolean stack1::Isempty()
{

    if(top==-1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
Boolean stack1::IsFull()
{
    if(top==max1-1)
    {
        return TRUE;
    }
    else
        {
            return FALSE;
        }
}
void stack1::push(int ch)
{
    if(IsFull())
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        a[++top]=ch;
    }

}
int stack1:: pop()
{
    if(Isempty())
    {
        cout<<"Underflow";
    }
    else
    {
        return a[top--];
    }
}
int stack1:: peek()
{
    if(Isempty())
    {
        cout<<"Underflow";
    }
    else
    {
        return a[top];
    }
}
void stack1::display()
{
    if(Isempty())
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        for(int i=0;i<=top;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
void prefixeval(char *post)
{

    int i=0;
    float result,v1,v2,v3;
    stack1 s1(50);
    for(int i=0;post[i]!='\0';i++)
    {
    if( post[i] >= 48 && post[i]<= 57)
        {
            s1.push(post[i]-'0');
        }
    else if(post[i]=='+'||post[i]=='-'||post[i]=='/'||post[i]=='*'||post[i]=='^')
    {
        v2=s1.pop();
        v1=s1.pop();
        switch(post[i])
        {
            case '+':v3=v2+v1;
                      break;
            case '-':v3=v2-v1;
                      break;
            case '*':v3=v2*v1;
                      break;
            case '/':v3=v2/v1;
                      break;
        }
        s1.push(v3);
    }
    else
    {
        cout<<"Error";
        return;
    }
    }
int x;
x=s1.pop();
cout<<"the result is = "<<x;

}
int main()
{
    cout<<"ENTER THE PREFIX EXPRESSION:"<<endl;
    char postfix[50];
    cin>>postfix;
    prefixeval(strrev(postfix));
    return 0;
}
