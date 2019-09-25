#include<iostream>
using namespace std;
#include<conio.h>
enum Boolean{FALSE,TRUE};
class queue1
{
    int front,rear;
    int a[10];
    int max1;
    public: queue1(int n)
    {
    max1=n;
    front=rear=-1;
    }
    Boolean Isempty();
    Boolean Isfull();
    void add(int x);
    void del();
    void display();
};
Boolean queue1 :: Isempty()
{
    if(rear==front)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
Boolean queue1 :: Isfull()
    {
        if(rear==max1-1)
            return TRUE;
        else
            return FALSE;
}
void queue1::add(int ele)
{
    if(Isfull())
    {
        cout<<"Queue Overflow";
    }
    else
    {
        a[++rear]=ele;
    }
}
void queue1::del()
{
    if(Isempty())
    {
        cout<<"Underflow";
    }
    else
    {
        cout<<"Deleted element is"<<(a[++front])<<endl;
    }
}
void queue1::display()
{
    if(Isempty())
        cout<<"Queue is empty\n";
    else
        for(int i=front+1;i<=rear;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
}
int main()
{
    queue1 s(30);
    int choice,ele;
    char ch;
 do
    {
     cout<<"Enter Choice "<<endl;
     cout<<"1.Insert Element "<<endl;
     cout<<"2.Delete Element "<<endl;
     cout<<"3.Display the Queue "<<endl;
     cin>>choice;
     switch(choice)
     {

         case 1:cout<<"Enter element"<<endl;
         cin>>ele;
         s.add(ele);
         break;
         case 2: s.del();
         break;
         case 3: cout<<"Output"<<endl;
         s.display();
         break;
     }
    }while(choice!=4);
}
