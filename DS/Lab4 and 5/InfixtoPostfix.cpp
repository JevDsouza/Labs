#include <iostream>
using namespace std;
enum Boolean{FALSE,TRUE};
class stack1
{
public:
    char a[10];int top;int max1;
    stack1()
    {
        top=-1;
        max1=100;
    }
    Boolean Isempty();
    Boolean IsFull();
    void push(char x);
    char pop();
    void display();
    char peek();
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
void stack1::push(char ch)
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
char stack1:: pop()
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
char stack1:: peek()
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
int isoperand(char ch)
{
    return((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z')||(ch>='0')&&(ch<='9'));
}
int isoperator(char ch)
{
    return((ch=='+')||(ch=='-')||(ch=='*')||(ch=='^')||(ch=='/'));
}
int prec(char ch)
{
    switch(ch)
    {
        case '+':
        case '-':return 1;
        case '*':
        case '/':return 2;
        case '^':return 3;
    }
    return 0;
}
int infixropost(char *exp)
{
    stack1 s;
    char result[25];
    int k=0;
    for(int i=0;exp[i]=='\0';i++)
    {
        if(isoperand(exp[i]))
        {
            result[k++]=exp[i];
        }
        else if(exp[i]==')')
        {
            while(!s.Isempty() && s.peek()!='(')
            {
                result[k++]=s.pop();
                s.pop();
            }
        }
        else if(isoperator(exp[i]))
        {
            while(!s.Isempty() && prec(s.peek()<=prec(exp[i])))
            {
                result[k++]=s.pop();
            }
            s.push(exp[i]);

        }
        while(!s.Isempty())
        {
            result[k++]=s.pop();
            result[k]='\0';
            cout<<result;
            return 1;

        }


    }


}
int main()
{
char infix[100];
cout<<"Enter Infix Expression \n";
cin>>infix;
infixropost(infix);
return 0;
}

