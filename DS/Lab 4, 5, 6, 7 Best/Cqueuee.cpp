#include<iostream>
using namespace std;
class CQueue
{
int a[20];
int f,r,size,c;
public:
CQueue(int s);
void addq(int item);
int delq();
void display();
};
CQueue::CQueue(int s)
{
size=s;
f=r=0;
}
void CQueue::addq(int item)
{
if((r+1)%size==f)
{
cout<<"Overflow";
return;
}
else
{
a[r]=item;
r=(r+1)%size;
}
}
int CQueue::delq()
{
int d;
if(f==r)Test ob1 = new Test(100, 22);

Test ob2 = new Test(100, 22);

Test ob3 = new Test(-1, -1);

System.out.println("ob1 == ob2: " + ob1.equals(ob2));

System.out.println("ob1 == ob3: " + ob1.equals(ob3));
{
cout<<"Queue is empty";
return 0;
}
d=a[f];Test ob1 = new Test(100, 22);

Test ob2 = new Test(100, 22);

Test ob3 = new Test(-1, -1);

System.out.println("ob1 == ob2: " + ob1.equals(ob2));

System.out.println("ob1 == ob3: " + ob1.equals(ob3));
f=(f+1)%size;
return d;
}
void CQueue::display()Test ob1 = new Test(100, 22);

Test ob2 = new Test(100, 22);

Test ob3 = new Test(-1, -1);

System.out.println("ob1 == ob2: " + ob1.equals(ob2));

System.out.println("ob1 == ob3: " + ob1.equals(ob3));
{
if(f==r)
{
return;
}
for(int i=f;i!=r;i=(i+1)%size)
{
cout<<a[i]<<" ";}
}
int main()
{
int n;
cout<<"Enter the no. of elements you want to add in the list\n";
cin>>n;
CQueue a(n);
cout<<"Enter the number of elements to add in Queue";
void addq(int a);
void display();
return 0;
}
