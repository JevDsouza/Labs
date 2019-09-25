#include <iostream.h>

class Cqueue
{
    int a[20];
    int f,r;
    int size1;
public :
    Cqueue(int s)
    {
        size1=s;
        f=r=0;
    }
    void addq(int item);
    int delq();
    void disp();

};
void Cqueue::addq(int item)
{
    if(((r+1)%size1)==f)
    {
        cout<<"Overflow"<<endl;
        return ;
    }
    else
        {
            a[r]=item;
            r=(r+1)%size1;
        }
}
int Cqueue::delq()
{
    int d;
    if(f==r)
    {
        cout<<"Empty";
        return -1;
    }
    d=a[f];
    f=(f+1)%size1;
    return d;
}
void Cqueue::disp()
{
    if(f==r)
    {
      return;
    }
    for(int i=f;i!=r;i=(i+1)%size1)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int choice;
    int ele;
    Cqueue q(20);
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
         q.addq(ele);
         break;
         case 2: cout<<"Delete items "<<q.delq()<<endl;
         break;
         case 3: cout<<"The output of queue is "<<endl;
         q.disp();
         break;
     }
    }while(choice!=4);
    return 0;
}